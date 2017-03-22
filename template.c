// hw6.c: Assignment #6 template
#include <stdio.h> //Standard Library
#include <stdlib.h>

//Board Size Constant
#define BOARD_SIZE 	8

//Board Space Constants
#define EMPTY_SPACE 0
#define P1_SPACE 	1
#define P2_SPACE 	2

//Player Constants
#define PLAYER1 	1
#define PLAYER2 	2

//Alignment Constants
#define HOR_ALIGN   3
#define VERT_ALIGN  4
#define DIAG_ALIGN  5

// function prototypes:
// All these three printBoard function prototypes are equivalent
void printBoard(int board[BOARD_SIZE][BOARD_SIZE]);	// OK
// void printBoard(int board[][BOARD_SIZE]);	// Good
// void printBoard(int (* board)[BOARD_SIZE]);  // Good

int validateInput();
// All these three printMove function prototypes are equivalent
int playMove(int x, int y, int PLAYER, int board[BOARD_SIZE][BOARD_SIZE]);  // OK
// int playMove(int x, int y, int PLAYER, int board[][BOARD_SIZE]); // Good
//int playMove(int x, int y, int PLAYER, int (* board)[BOARD_SIZE]);  // Good

int gameOver(int board[BOARD_SIZE][BOARD_SIZE]);
int getAlignment(int x1, int y1, int x2, int y2);

int main(void){

    // .....

    int board[BOARD_SIZE][BOARD_SIZE];	//Game Board Variable

    // use a do-while or while loop here
//     do{
        // ...

        //Getting Player Input
        int x, y;
        printf("\n");
        printf("Enter X coordinate: ");
        x = validateInput();
        printf("Enter Y coordinate: ");
        y = validateInput();
        playMove(x, y, playersTurn, board);	// Place Move on Board
        printBoard(board); // function call

 //   }while(!gameOver(board)); //Loop while the game is not over

    return 0;
}
