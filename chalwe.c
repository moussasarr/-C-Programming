

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
#define HOR_ALIGN 	3
#define VERT_ALIGN 	4
#define DIAG_ALIGN 	5

int getAlignment(int, int, int, int);	//Returns Alignment Constant
void printBoard(int[BOARD_SIZE][BOARD_SIZE]);	//Prints Game Board
int validateInput();
int playMove(int, int, int, int [BOARD_SIZE][BOARD_SIZE]);

int main(void){

    char player1FirstName[20];	//Player 1 Name
    char player1LastName[20];
    char player2FirstName[20];	//Player 2 Name
    char player2LastName[20];

    float player1Score = 2;  	//Player 1 Score
    float player2Score = 2;  	//Player 2 Score

    int playersTurn = PLAYER1; 	//Player 1 always go first

    int board[BOARD_SIZE][BOARD_SIZE];	//Game Board Variable

    //Clear the game board
    int i;
    for(i=0; i<BOARD_SIZE; i++){
        int j;
        for(j=0; j<BOARD_SIZE; j++){
            board[i][j] = EMPTY_SPACE;	//Set spaces to EMPTY_SPACE (free);
        }
    }

    //Set starting pieces on game board
    board[3][3] = P1_SPACE;
    board[4][4] = P1_SPACE;
    board[4][3] = P2_SPACE;
    board[3][4] = P2_SPACE;

    //Receiving Player Names
    printf("Enter Player 1\'s First Name: ");
    scanf("%s", player1FirstName); //Notice that '&' is not used when taking in characters

    printf("Enter Player 1\'s Last Name: ");
    scanf("%s", player1LastName);

    printf("Enter Player 2\'s First Name: ");
    scanf("%s", player2FirstName);

    printf("Enter Player 2\'s Last Name: ");
    scanf("%s", player2LastName);

    printBoard(board);


    int status;

    do{
        //Printing out Player Names and Scores
        printf("\n"); //Start a new line
        printf("%s %s\'s Score (B): \t%.1f\n", player1FirstName, player1LastName, player1Score);
        printf("%s %s\'s Score (W): \t%.1f\n\n", player2FirstName, player2LastName, player2Score);

        if(playersTurn == PLAYER1){
            printf("%s %s, it is your turn.", player1FirstName, player1LastName);
        }
        if(playersTurn == PLAYER2){
            printf("%s %s, it is your turn.", player2FirstName, player2LastName);
        }
        printf("\n");

        //Getting Player Input
        int x, y;
        printf("\n");
        printf("Enter X coordinate: ");
        x = validateInput();
        printf("Enter Y coordinate: ");
        y = validateInput();
        playMove(x, y, playersTurn, board);	//Place Move on Board

        printBoard(board);

        //Switch Players Turns
        playersTurn = playersTurn == PLAYER1 ? PLAYER2 : PLAYER1;
        printf("Enter an integer to continue (q to exit): ");
    }while(scanf("%d", &status));

    return 0;
}

//Finds Possible Alignment Between Two Points
int getAlignment(int x1, int y1, int x2, int y2){
    if(y1 == y2)			//Horizontally Aligned
    return HOR_ALIGN;
    if(x1 == x2)			//Vertically Aligned
    return VERT_ALIGN;
    if(abs(x1 - x2) == abs(y1 - y2))
    return DIAG_ALIGN;	//Diagonally Aligned
    return 0;	//Return nothing if points aren't aligned
}

void printBoard(int board[BOARD_SIZE][BOARD_SIZE]){
    //Display the game board
    int y;
    for(y=0; y<=BOARD_SIZE; y++){

        //Print Top Row of Board
        if(y == 0){
            printf("   ");//Justify the top to the right 3 spaces
            //Print Top Column Numbers
            int x;
            for(x=1; x<=BOARD_SIZE; x++){
                printf("%2d", x);
            }
        }else{ //Printing Each Row of the Game Board
            printf("%2d ", y); // Print Leading Row Number

            //Depending on state of space, print out either '.', 'W', or 'B'
            int x;
            for(x=1; x<=BOARD_SIZE; x++){
                switch(board[x-1][y-1]){	//Print B,W, or . depending on space stored in board
                case EMPTY_SPACE:
                    printf(" .");
                    break;
                case P1_SPACE:
                    printf(" B");
                    break;
                case P2_SPACE:
                    printf(" W");
                    break;
                // default:
                    //Shouldn't Happen
                }
            }
        }
        printf("\n"); //Start New Row
    }
}

//To be changed in XGame Week 5 Assignment
int playMove(int x, int y, int PLAYER, int board[BOARD_SIZE][BOARD_SIZE]){
    // Check if
    board[x-1][y-1] = PLAYER; //Set board to either P1_SPACE or P2_SPACE








    return 1;
}

int validateInput(){
    int num;
    while(scanf("%d", &num) != 1 || num < 1 || num > BOARD_SIZE){
        while(getchar() !='\n'){} // clear the input buffer
        printf("Invalid Input. Enter again: ");
    }
    while(getchar() !='\n'){} // clear the input buffer when the player enters a float
    return num;
}
