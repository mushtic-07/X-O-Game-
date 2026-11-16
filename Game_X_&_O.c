#include <stdio.h>
char board[3][3];

void reset();

void border();

int checkwin();

int main()
{
    
    int move = 0 ,choice , row, column;
    char player = 'X';

    reset(board);
    printf("\tThis is the Two player X | O game....\n\t\tPLAYER-01 = X \n\t\tPLAYER-02 = O\n\n");
    while(1){
    border(board);
    printf("Player %c turn , Choose from 1 - 9 :\n ",player);
    
    scanf("%d", &choice); 

    if(choice < 1 || choice > 9)
    {
        printf("Number must be between 1 and 9 \n\n");
        continue;
    }


    printf("kya hall aih");
    break;


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
    
}
