#include <iostream>
#include <vector>
using namespace std;


const int width = 10;
const int height = 20;
int board[height][width] = { 0 };

int tetromino[4][4] = {
    {0, 0, 0, 0},
    {1, 1, 1, 1},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
};

void drawBoard() {
    system("cls");
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            cout << (board[y][x] ? "#" : ".");
        }
        cout << endl;
    }
}

int main() {
    while (true) {
        drawBoard();
        // Handle input and game logic here
        if (_kbhit()) {
            char c = _getch();
            if (c == 'q') break;
            // Add movement/rotation logic
        }
                        // Add piece drop and collision logic
                    // Sleep for a short time
    }
    return 0;
}