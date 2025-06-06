#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
using namespace std;

const int width = 10;
const int height = 20;
int board[height][width] = { 0 };
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

#pragma region Tetromino Definitions
int tetrominoes[7][4][4] = {
    // I
    {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // O
    {
        {0, 1, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // T
    {
        {0, 1, 0, 0},
        {1, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // L
    {
        {0, 0, 1, 0},
        {1, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // J
    {
        {1, 0, 0, 0},
        {1, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // S
    {
        {0, 1, 1, 0},
        {1, 1, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    },
    // Z
    {
        {1, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    }
};
#pragma endregion

int currentX = 3, currentY = 0, currentTetromino;
int shape[4][4];

void copyShape(int dst[4][4], int src[4][4]) {
    for (int y = 0; y < 4; y++)
        for (int x = 0; x < 4; x++)
            dst[y][x] = src[y][x];
}
#pragma region Drawing Functions
void drawBoard() {
    system("cls");
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            bool isPiece = false;
            for (int py = 0; py < 4; ++py) {
                for (int px = 0; px < 4; ++px) {
                    if (shape[py][px]) {
                        int gx = currentX + px;
                        int gy = currentY + py;
                        if (gx == x && gy == y) {
                            SetConsoleTextAttribute(hConsole, 14); // Active 
                            cout << " #";
                            SetConsoleTextAttribute(hConsole, 7);
                            isPiece = true;
                        }
                    }
                }
            }
            if (!isPiece) {
                if (board[y][x]) {
                    SetConsoleTextAttribute(hConsole, 11); // Locked 
                    cout << " #";
                }
                else {
                    SetConsoleTextAttribute(hConsole, 8); // Background
                    cout << " .";
                }
                SetConsoleTextAttribute(hConsole, 7);
            }
        }
        cout << endl;
    }
    cout.flush();
}
#pragma endregion
#pragma region Movement Functions
bool canMove(int newX, int newY, int newShape[4][4]) {
    for (int y = 0; y < 4; y++) {
        for (int x = 0; x < 4; x++) {
            if (newShape[y][x]) {
                int bx = newX + x;
                int by = newY + y;
                if (bx < 0 || bx >= width || by < 0 || by >= height || board[by][bx])
                    return false;
            }
        }
    }
    return true;
}

void rotateShape() {
    int rotated[4][4] = { 0 };
    for (int y = 0; y < 4; y++)
        for (int x = 0; x < 4; x++)
            rotated[x][3 - y] = shape[y][x];

    if (canMove(currentX, currentY, rotated))
        copyShape(shape, rotated);
}
#pragma endregion
void lockPiece() {
    for (int y = 0; y < 4; y++)
        for (int x = 0; x < 4; x++)
            if (shape[y][x])
                board[currentY + y][currentX + x] = 1;
}
#pragma region Line Clearing Functions
void clearLines() {
    for (int y = height - 1; y >= 0; y--) {
        bool full = true;
        for (int x = 0; x < width; x++) {
            if (!board[y][x]) {
                full = false;
                break;
            }
        }
        if (full) {
            for (int row = y; row > 0; row--)
                for (int col = 0; col < width; col++)
                    board[row][col] = board[row - 1][col];
            for (int col = 0; col < width; col++)
                board[0][col] = 0;
            y++;
        }
    }
}
#pragma endregion
#pragma region Tetromino Spawning Functions
void spawnTetromino() {
    currentTetromino = rand() % 7;
    copyShape(shape, tetrominoes[currentTetromino]);
    currentX = 3;
    currentY = 0;
    if (!canMove(currentX, currentY, shape)) {
        cout << "Game Over!" << endl;
        exit(0);
    }
}
#pragma endregion
#pragma region Main
int main() {
    srand(time(0));
    spawnTetromino();
    while (true) {
        drawBoard();

        for (int i = 0; i < 20; i++) {
            if (_kbhit()) {
                char c = _getch();
                if ((c == 'a' || c == 'A') && canMove(currentX - 1, currentY, shape)) currentX--;
                if ((c == 'd' || c == 'D') && canMove(currentX + 1, currentY, shape)) currentX++;
                if ((c == 's' || c == 'S') && canMove(currentX, currentY + 1, shape)) currentY++;
                if (c == 'w' || c == 'W') rotateShape();
                if (c == 'q' || c == 'Q') exit(0);
            }
            Sleep(10);
        }

        if (canMove(currentX, currentY + 1, shape)) {
            currentY++;
        }
        else {
            lockPiece();
            clearLines();
            spawnTetromino();
        }
    }
    return 0;
}
#pragma endregion
