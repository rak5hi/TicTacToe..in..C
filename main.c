#include <stdio.h>
#include <stdlib.h>

void displayBoard();
void markBoard(char mark);
int checkForWin();

char square[10]={ '0','1','2','3','4','5','6','7','8','9' };
int choice = 0;
int player = 0;

int main()
{ 
	int gameStatus = 0;
	char mark=' ';
	player = 1;
	
	do
	{
	displayBoard();
	
	player = (player%2) ? 1 : 2 ;
	
	printf("PLAYER %d--->>>>>YOUR CHOICE<<<<<\n ENTER THE NUMBER TO MARK IT: ", player);
	scanf("%d", &choice);
	
	mark = (player == 1) ? 'X' : 'o' ;
	
	markBoard(mark);
	
	gameStatus = checkForWin();
	
	player ++;
	
	}while (gameStatus == -1);
	
	if (gameStatus == 1)
		printf("PLAYER %d win",--player);
	else 
	    printf("GAME DRAW");
		
   return 0;
}

/* drawing tic tac toe board */
void displayBoard()
{
	system ("cls"); //clearing console ,for mac use clear instead of cls
	
	printf("\n\n\t   Tic Tac Toe \n\n");
	
	printf("  PLAYER 1-(X) v/s PLAYER 2-(o)\n\n\n");
	
	printf("\t     |     |   \n");
	printf("\t  %c  |  %c  |  %c \n", square[1], square[2], square[3] );
	printf("\t_____|_____|_____\n");
	printf("\t     |     |   \n");
	printf("\t  %c  |  %c  |  %c \n", square[4], square[5], square[6] );
	printf("\t_____|_____|_____\n");
	printf("\t     |     |   \n");
	printf("\t  %c  |  %c  |  %c \n", square[7], square[8], square[9] );
	printf("\t     |     |   \n\n\n");
}

/* marking the board with x or o */
void markBoard(char mark)
{
	if(choice == 1 && square[1] == '1')
		square[1] = mark;
		
    
	else if(choice == 2 && square[2] == '2')
		square[2] = mark;
		
    else if(choice == 3 && square[3] == '3')
		square[3] = mark;
		
    else if(choice == 4 && square[4] == '4')
		square[4] = mark; 
		
	else if(choice == 5 && square[5] == '5')
		square[5] = mark;
		
	else if(choice == 6 && square[6] == '6')
		square[6] = mark;
		
	else if(choice == 7 && square[7] == '7')
		square[7] = mark;
		
	else if(choice == 8 && square[8] == '8')
		square[8] = mark;
		
	else if(choice == 9 && square[9] == '9')
		square[9] = mark;
	else 
	{ 
		printf("INVALID MOVE");
		
		player--;
		getchar();
	}
}

/* checking for win */
int checkForWin()
{
	int returnValue = 0;
	
	if ( square[1] == square[2] && square[2] == square[3] )
		returnValue = 1;
		
	else if( square[4] == square[5] && square[5] == square[6] )
			returnValue = 1;
			
	else if( square[7] == square[8] && square[8] == square[9] )
			returnValue = 1; 
				
	else if( square[1] == square[4] && square[4] == square[7] )  
			returnValue = 1;
				
	else if( square[2] == square[5] && square[5] == square[8] )
			returnValue = 1;
			
	else if( square[3] == square[6] && square[6] == square[9] )
			returnValue = 1;
			
	else if( square[1] == square[5] && square[5] == square[9] )
		    returnValue = 1;
			
	else if( square[3] == square[5] && square[5] == square[7] )
			returnValue = 1;
			
	else if( square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9' )
		    returnValue = 0;
			
	else
		returnValue = -1;
		
	return returnValue;
}
			

