#include<stdio.h>
void display(char board []){
	printf(" | %c | %c| %c |",board[0],board[1],board[2]);
	printf("\n__________\n ");
	printf("| %c | %c| %c |",board[3],board[4],board[5]);
	printf("\n__________\n ");
	printf("| %c | %c| %c |",board[6],board[7],board[8]);
	printf("\n__________\n ");
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
    for (i=1;i<=8;i++){
    	if 
		( board[win[i][0]]==board[win[i][1]]&&
    	board[win[i][1]]==board[win[i][2]] )
		{
    		return 1;
		}
	}
	return 0;
	}
int main(){
	char board[9]={'1','2','3','4','5','6','7','8','9'};
	int i; //for turns ;
	int pos;//for positions ;
     display(board);
	// ist user 
	printf("\n\nenter player1 name :");
	char n[100];
	scanf("%s",n);
	printf("\n %s chose your symbol * or 0 ",n);
	char s[11];
	scanf("%s",s);
	// 2nd user 
	printf("\nenter player2 name: ");
	char n2[100];
	char s2[10];
	scanf("%s",n2);
	if(s[0] == '*'){
		s2[0]='0'; 
		printf("%s your symbol is 0 ",n2);
		if(s[0] == '0'){
			s2[0]='*';
		printf("%s your symbol is * ",n2);
	}
	}
	else{
		printf("inavlid symbols chosen or some thing went wrong ");
	}
		for (i=0;i<9;i++){
			if (i%2==0){
				 printf("\n%s (%s), enter position (1-9): ", n, s[0]);
            scanf("%d", &pos);
             if(pos < 1 || pos > 9 || board[pos-1] == '*' || board[pos-1] == '0')
            {
                printf("Invalid Move! Try Again.\n");
                i--;
                continue;
            }

            board[pos-1] = s[0];
            i--;
			}
		}
	
	


	
	
	return 0;
}
