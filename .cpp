#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    unsigned int seed = time(0);      // Random number generator for when X can't win or block
    srand(seed);
    
    bool madeMove = 0;
    int num = 0;
    int boardState[10];
    cout << "Enter board state as 9 integers, 0-2: ";
    
    for (int i = 0; i < 9; i++)
        cin >> boardState[i];
    
    // This generates the Tic Tac Toe board
    
    cout << "Current board state: " << endl;
    cout << "+-+-+-+" << endl;
    cout << "|" << boardState[0] << "|" << boardState[1] << "|" << boardState[2] << "|" << endl;
    cout << "+-+-+-+" << endl;
    cout << "|" << boardState[3] << "|" << boardState[4] << "|" << boardState[5] << "|" << endl;
    cout << "+-+-+-+" << endl;
    cout << "|" << boardState[6] << "|" << boardState[7] << "|" << boardState[8] << "|" << endl;
    cout << "+-+-+-+" << endl;
    
    /*
     
     WINNING MOVES
     
     */
    
    if (boardState[0] == 0 && madeMove == 0) {
        if ((boardState[3] == 1 && boardState[6] == 1) || (boardState[4] == 1  && boardState[8] == 1) || (boardState[1] == 1 && boardState[2] == 1)) {
            boardState[0] = 1;
            cout << "X takes the winning move on cell 1!" << endl;
            madeMove = 1;
        }
    }
    
    else if (boardState[1] == 0 && madeMove == 0) {
        if ((boardState[4] == 1 && boardState[7] == 1) || (boardState[0] == 1 && boardState[2] == 1)) {
            boardState[1] = 1;
            cout << "X takes the winning move on cell 2!" << endl;
            madeMove = 1;
        }
    }
    
    else if (boardState[2] == 0 && madeMove == 0) {
        if ((boardState[4] == 1 && boardState[6] == 1) || (boardState[5] == 1 && boardState[8] == 1) || (boardState[0] == 1 && boardState[1] == 1)) {
            boardState[2] = 1;
            cout << "X takes the winning move on cell 3!" << endl;
            madeMove = 1;
        }
    }
    
    /* 

     BLOCKING MOVES
    
     */
    
    if (boardState[0] == 0 && madeMove == 0) {
        if ((boardState[3] == 2 && boardState[6] == 2) || (boardState[4] == 2 && boardState[8] == 2) || (boardState[1] == 2 && boardState[2] == 2)) {
            boardState[0] = 1;
            cout << "X blocks the winning move on cell 1!" << endl;
            madeMove = 1;
        }
    }
    
    else if (boardState[1] == 0 && madeMove == 0) {
        if ((boardState[4] == 2 && boardState[7] == 2) || (boardState[0] == 2 && boardState[2] == 2)) {
            boardState[1] = 1;
            cout << "X blocks the winning move on cell 2!" << endl;
            madeMove = 1;
        }
    }
    
    else if (boardState[2] == 0 && madeMove == 0) {
        if ((boardState[4] == 2 && boardState[6] == 2) || (boardState[5] == 2 && boardState[8] == 2) || (boardState[0] == 2 && boardState[1] == 2)) {
            boardState[2] = 1;
            cout << "X blocks the winning move on cell 3!" << endl;
            madeMove = 1;
        }
    }
    
    if (madeMove == 0) {
        num = rand() % 3;
        
        while (boardState[num] == 1 || boardState[num] == 2) {
            num = rand() % 3;
        }
        
        boardState[num] = 1;
        cout << "X chose cell " << (num + 1)  << "!" << endl;
    }
    
    cout << "New board:" << endl;
    cout << "+-+-+-+" << endl;
    cout << "|" << boardState[0] << "|" << boardState[1] << "|" << boardState[2] << "|" << endl;
    cout << "+-+-+-+" << endl;
    cout << "|" << boardState[3] << "|" << boardState[4] << "|" << boardState[5] << "|" << endl;
    cout << "+-+-+-+" << endl;
    cout << "|" << boardState[6] << "|" << boardState[7] << "|" << boardState[8] << "|" << endl;
    cout << "+-+-+-+" << endl;
}
