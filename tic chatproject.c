#include <stdio.h>

void display(char board[])
{
    printf("\n");
    printf(" %c | %c | %c ", board[0], board[1], board[2]);
    printf("\n-----------\n");
    printf(" %c | %c | %c ", board[3], board[4], board[5]);
    printf("\n-----------\n");
    printf(" %c | %c | %c ", board[6], board[7], board[8]);
    printf("\n");
}

int checkWin(char board[])
{
    int win[8][3] = {
        {0,1,2},
        {3,4,5},
        {6,7,8},
        {0,3,6},
        {1,4,7},
        {2,5,8},
        {0,4,8},
        {2,4,6}
    };
int i;
    for(i=0; i<8; i++)
    {
        if(board[win[i][0]] == board[win[i][1]] &&
           board[win[i][1]] == board[win[i][2]])
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    char board[9] = {'1','2','3','4','5','6','7','8','9'};

    char n1[100], n2[100];
    char s1, s2;
    int pos, turn;

    printf("===== TIC TAC TOE =====\n");

    printf("Enter Player 1 Name: ");
    scanf("%s", n1);

    printf("%s choose your symbol (* or 0): ", n1);
    scanf(" %c", &s1);

    if(s1 == '*')
    {
        s2 = '0';
    }
    else if(s1 == '0')
    {
        s2 = '*';
    }
    else
    {
        printf("Invalid Symbol!\n");
        return 0;
    }

    printf("Enter Player 2 Name: ");
    scanf("%s", n2);

    printf("%s your symbol is %c\n", n2, s2);

    display(board);

    for(turn = 0; turn < 9; turn++)
    {
        if(turn % 2 == 0)
        {
            printf("\n%s (%c), enter position (1-9): ", n1, s1);
            scanf("%d", &pos);

            if(pos < 1 || pos > 9 || board[pos-1] == '*' || board[pos-1] == '0')
            {
                printf("Invalid Move! Try Again.\n");
                turn--;
                continue;
            }

            board[pos-1] = s1;
        }
        else
        {
            printf("\n%s (%c), enter position (1-9): ", n2, s2);
            scanf("%d", &pos);

            if(pos < 1 || pos > 9 || board[pos-1] == '*' || board[pos-1] == '0')
            {
                printf("Invalid Move! Try Again.\n");
                turn--;
                continue;
            }

            board[pos-1] = s2;
        }

        display(board);

        if(checkWin(board))
        {
            if(turn % 2 == 0)
            {
                printf("\nCongratulations %s! You Win.\n", n1);
            }
            else
            {
                printf("\nCongratulations %s! You Win.\n", n2);
            }

            return 0;
        }
    }

    printf("\nMatch Draw!\n");

    return 0;
}
