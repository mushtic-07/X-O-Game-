#include <stdio.h>
char board[3][3];

void reset();

void border();

int checkwin();

int main()
{
    
    int move = 0 ,choice;
    char player = 'X';

    reset();
    printf("\tThis is the Two player X | O game....\n\t\tPLAYER-01 = X \n\t\tPLAYER-02 = O\n\n");

    for(;;)
    {
    border();

    printf("Player %c turn , Choose from 1 - 9 :\n ",player);

    scanf("%d", &choice); 

    if(choice < 1 || choice > 9){
        printf("Position must be between 1 and 9 \n\n");
        continue;
    }

    
    switch (choice)// To assign value at enterd position.
    {
    case 1:
        if (board[0][0] != 'X' && board[0][0] != 'O'){
            board[0][0]= player;
            move++;
        }
        else
            printf("\nPOSITION OCCUPIED, TRY ANOTHER ONE\n");
        break;                                                
    case 2:
        // board[0][1] = player;
        if (board[0][1] != 'X' && board[0][1] != 'O'){
            board[0][1]= player;
            move++;
        }
        else
            printf("\nPOSITION OCCUPIED, TRY ANOTHER ONE\n");
        break;
    case 3:
        if (board[0][2] != 'X' && board[0][2] != 'O'){
            board[0][2]= player;
            move++;
        }
        else
            printf("\nPOSITION OCCUPIED, TRY ANOTHER ONE\n");
        break;
    case 4:
        if (board[1][0] != 'X' && board[1][0] != 'O'){
            board[1][0]= player;
            move++;
        }
        else
            printf("\nPOSITION OCCUPIED, TRY ANOTHER ONE\n");
        break;
    case 5:
        if (board[1][1] != 'X' && board[1][1] != 'O'){
            board[1][1]= player;
            move++;
        }
        else
            printf("\nPOSITION OCCUPIED, TRY ANOTHER ONE\n");
        break;
    case 6:
        if (board[1][2] != 'X' && board[1][2] != 'O'){
            board[1][2]= player;
            move++;
        }
        else
            printf("\nPOSITION OCCUPIED, TRY ANOTHER ONE\n");
        break;
    case 7:
        if (board[2][0] != 'X' && board[2][0] != 'O'){
            board[2][0]= player;
            move++;
        }
        else
            printf("\nPOSITION OCCUPIED, TRY ANOTHER ONE\n");
        break;
    case 8:
        if (board[2][1] != 'X' && board[2][1] != 'O'){
            board[2][1]= player;
            move++;
        }
        else
            printf("\nPOSITION OCCUPIED, TRY ANOTHER ONE\n");
        break;
    case 9:
        if (board[2][2] != 'X' && board[2][2] != 'O'){
            board[2][2]= player;
            move++;
        }
        else
            printf("\nPOSITION OCCUPIED, TRY ANOTHER ONE\n");
        break;
    }

    if(checkwin()){// check winner and display it.
        border();
        printf("PLAYER %c WINS\n",player);
        return 0;
    } 
    // 
    if (move == 9){ // draw when all 9 box are filed but no match to win
        border();
        printf("DRAW NO ONE WINS \n");
        return 0;
    }

    printf("Moves remaining : %d \n",(9 - move));// display nuber of turn remaining.
    
    player = (player == 'X')? 'O': 'X';// player turn swap.
    }
    return 0;
}
void reset()
{
    char c = '1';
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            board[row][column] = c++;
        }
    }
}

void border() // this block display box type grid in game.
{
    for (int i = 0; i < 3; i++)
    { 
        if (i == 0) // print top closing pattern
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 218 /*first*/, 196, 196, 196, 194 /*mid*/, 196, 196, 196, 194 /*mid*/, 196, 196, 196, 191 /*last*/);
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
                printf("%c", 179);
            printf(" %c ", board[i][j]);
            if (j == 2)
                printf("%c", 179);
            if (j < 2)
                printf("%c", 179);
        }
        printf("\n");
        if (i < 2) // print middle line
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 195, 196, 196, 196, 197, 196, 196, 196, 197, 196, 196, 196, 180);

        if (i == 2) // print end pattern
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 192 /*first*/, 196, 196, 196, 193 /*mid*/, 196, 196, 196, 193 /*mid*/, 196, 196, 196, 217 /*last*/);
    }
}

int checkwin(){
    // row check 
    for (int row = 0; row < 3; row++)
    {
        if( board[row][0] == board[row][1] && board[row][2] == board[row][1])
            return 1;
    }

    // column check
    for (int column = 0; column < 3; column++){
        if( board[0][column] == board[1][column] && board[2][column] == board[1][column])
            return 1;
    }
    
    // digonal check 
    if( board[0][0] == board[1][1] && board[2][2] == board[1][1])
                return 1;

    return 0; 
    
}
