#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;



const int width = 10;
const int height = 20;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);



class Game
{
private:
	string name;
	int points = 0;
	int board[height][width] = { 0 };
	int currentX = 3, currentY = 0, currentTetromino;
	int shape[4][4];
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
                                    SetConsoleTextAttribute(hConsole, 14); // Active | yellow
                                    cout << (char)219 << (char)219;
                                    SetConsoleTextAttribute(hConsole, 7); // Reset color
                                    isPiece = true;

                                }
                            }
                        }
                    }
                    if (!isPiece) {
                        if (board[y][x]) {
                            SetConsoleTextAttribute(hConsole, 11); // Locked | cyan
                            cout << (char)219 << (char)219;
                        }
                        else {
                            SetConsoleTextAttribute(hConsole, 8); // Background | gray
                            cout << (char)219 << (char)219;
                        }
                        SetConsoleTextAttribute(hConsole, 7); // Reset color
                    }
                }
                cout << endl;
            }
            cout.flush();
        }
    #pragma endregion
    #pragma region Movement Functions
        bool canMove(int newX, int newY, int newShape[4][4])
        {
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
                    points += 100;
                    
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
public:
    #pragma region run
	void run()
    {
        srand(time(0));
        spawnTetromino();
        while (true) {
            drawBoard();
            cout << points << endl;

            for (int i = 0; i < 20; i++) {
                if (_kbhit()) {
                    char c = _getch();
                    if ((c == 'a' || c == 'A') && canMove(currentX - 1, currentY, shape)) currentX--;
                    if ((c == 'd' || c == 'D') && canMove(currentX + 1, currentY, shape)) currentX++;
                    if ((c == 's' || c == 'S') && canMove(currentX, currentY + 1, shape)) currentY++;
                    if (c == 'w' || c == 'W') rotateShape();
                    BinarySave();
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
		
    }
#pragma endregion
	void PrintLeaderBoard()
	{
		cout << "Name: " << name << endl;
		cout << "Points: " << points << endl;
	}
#pragma region Save Load Functions
    void BinarySave()
    {
        ofstream out("LeaderBoard.bin", ios_base::out | ios_base::binary);
        out.write((char*)&name, sizeof(name));
        out.write((char*)&points, sizeof(points));
        
        out.close();
		
        
	}
    void BinaryRead()
    {
        ifstream in("LeaderBoard.bin", ios_base::binary);
        if (!in.is_open())
        {
            cout << "File not found" << endl;
            return;
        }
        in.read((char*)&name, sizeof(name));
        in.read((char*)&points, sizeof(points));
        PrintLeaderBoard();
		cout << "Game loaded!" << endl;
		in.close();
	}
#pragma endregion
#pragma region Getters and Setters
	void SetName(const string& playerName) {
		name = playerName;
	}
    string GetName() const {
		return name;
	}
	int GetPoints() const {
		return points;
	}
#pragma endregion
};





#pragma region Main
void main()
{
	Game game;
	string name;
	
	
	cout << "Press 'q' to quit, 'l' to continue your previous game, 'r' to register" << endl;
    char c;
    
    do
    {
        c = _getch();
        switch (c)
        {
		case 'r':
            cout << "Enter your name: ";
            getline(cin, name);
            game.SetName(name);
			game.run();
        case 'l':
			game.BinaryRead();
			name = game.GetName();
            cout << "Welcome, " << name << "!" << endl;
            cout << "Your previous score: " << game.GetPoints() << "!" << endl;
			Sleep(3000);
            game.run();
			break;
		case 'q':
			cout << "Exiting game..." << endl;
			return;
		default:
			cout << "Invalid option. Press 'l' to load game or 'q' to quit." << endl;
			break;
        }

    } while (c != 'q');
	
}

#pragma endregion
