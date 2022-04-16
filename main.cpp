// *****************Battleship game****************************
// This program is designed to mimic the popular children's game
//
// Battleship_Testing_Grounds- Pace Group 2
//
// Ahote Webb, Bruce Cameron, Jemari Pinpin, Kirby Labounty, Mark Stoegbauareurearuaeruar


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


struct BoardType {
   int numArray[MAX_SIZE][MAX_SIZE];
   int rowsUsed;
   int colsUsed;
   int numCount;
};

// Initialize array with random symbols ( ~ ) for ocean waves and ( # ) for ships
// 5 ships with a total of 17 possible hits
// Pre: N/A
// Post: The array will store random '~' with 17 '#' in a 10x10 grid.
void InitArray(/* OUT */ BoardType &Board);

// Display User's hit's and misses in an array grid( '.' for misses and 'H' for hits)
// Pre: All info from InitArray will be stored into the Array.
// Post: Print all ships in random grid. (After each guess, updated array will print misses with '.' and hits with 'H')
void PrintArray(/* IN */ BoardType Board);

// Check for user's choices
// Pre: rowFound and colFound will be set to # location
// Post: Check if User choice is equal to #, if it is set # to 'H'.
bool FindShip(/* IN */ BoardType Board, /* IN */ int choice, /* OUT */int &rowFound, /* OUT */ int &colFound);


using namespace std;

int main(){
    int choice;
    int rowFound = 0, guessRow;
    int colFound = 0, guessCol;
    bool found, found2;
    BoardType Board;
    const int MAX_SIZE = 10;
    Board.rowsUsed = MAX_SIZE;
    Board.colsUsed = MAX_SIZE;

    cout << "Hello world!" << endl;

    return 0;
}
