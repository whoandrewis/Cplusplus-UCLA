//Andrew Nguyen
#include "ticTacToeBoard.h"
#include <iostream>
using namespace std;

void printBoard(ticTacToeBoard board) {
  for (int y=0; y<4; y++) {
    cout << "|";
    for (int x=0; x<4; x++) {
      if (board.points[x+4*y]==0)
	cout << " ";
      else if (board.points[x+4*y]==1)
	cout << "X";
      else if (board.points[x+4*y]==-1)
	cout << "O";

      cout << "|";
    }
    cout << endl;
  }
}

// loop through and set each value at the index to 0
void initBoard(ticTacToeBoard& board) {
	board.curr_player = 1;
	for (int i = 0; i < 16; ++i) { 
		board.points[i] = 0; 
	}
}

bool isEmpty(ticTacToeBoard board, int x, int y) {

	if (board.points[(x-1) + 4*(y-1)] == 0) {
		return true;
	}
	else {
		return false;
	}
}
void mark(ticTacToeBoard& board, int x, int y) { 
	if (board.curr_player == 1) { // Player X went first, represented by 1 
		board.points[(x - 1) + 4 * (y - 1)] = 1;
	}
	else { // Player O went second, represented by -1
		board.points[(x - 1) + 4 * (y - 1)] = -1;
	}

}
bool boardFull(ticTacToeBoard board) { // based on this, you can pass an object through into a function
	// want to traverse the points array and see if any 0's left, if there
	int sum = 0;
	for (int i = 0; i < 16; ++i) {
		if (board.points[i] == 1) {
			++sum;
		}
		else if (board.points[i] == -1) {
			++sum;
		}
	}

	if (sum == 16) {
		return true;
	}
	else {
		return false;
	}

}
// 10 possible ways to get a ROW of 1's or -1's for a winner 

int winner(ticTacToeBoard board) { // winner call is sending argument object b1
	// assignment says writing a helper function might help, ask Will how helper functions could help and if they are included do we need to add them into the header file 
	int total1 = 0;

	// start with y fixed and iterate through the rows
	for (int i1 = 1; i1 < 5; ++i1) { // want to start at 1 because the columns start at 1 and there are 4 
		// traverse column to column
		for (int i2 = 1; i2 < 5; ++i2) {
			total1 += board.points[(i2 - 1) + 4 * (1 - 1)]; // y is fixed to 1 and iterate through for different x values
			if (total1 == (-4)) {
				return -1;
			}
			else if (total1 == (4)) {
				return 1;
			}
		}
		total1 = 0;
	}

	int total2 = 0;
	for (int i3 = 1; i3 < 5; ++i3) {
		//now fix x and traverse through the rows by changing y
		for (int i3 = 1; i3 < 5; ++i3) {
			total2 += board.points[(1 - 1) + 4 * (i3 - 1)];
			if (total2 == (-4)) {
				return -1;
			}
			else if (total2 == (4)) {
				return 1;
			}
		}
		total2 = 0;
	}


	// now do the diagnol win conditions 
	int total3 = 0;
	for (int diagnol_backslash = 1; diagnol_backslash < 5; ++diagnol_backslash) {
		total3 += board.points[(diagnol_backslash - 1) + 4 * (diagnol_backslash - 1)];
		if (total3 == (-4)) {
			return -1;
		}
		else if (total3 == (4)) {
			return 1;
		}
	}
	int total4 = 0;
	// forward_slash win condition, last win condition
	for (int diagnol_forwardslash1 = 1; diagnol_forwardslash1 < 5; ++diagnol_forwardslash1) {
		int diagnol_forwardslash2 = 4;
		total4 += board.points[(diagnol_forwardslash1 - 1) + 4 * (diagnol_forwardslash2 - 1)];
		if (total4 == (-4)) {
			return -1;
		}
		else if (total4 == (4)) {
			return 1;
		}
		--diagnol_forwardslash2;
	}
	
	
	return 0;
}