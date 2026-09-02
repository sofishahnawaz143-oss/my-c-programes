#include<stdio.h>
int table(int *n){
	int i,result;
	for (i=1;i<=10;i++){
		printf("%d * %d = %d \n",*n,i,*n * i);
	}
}
int main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	table(&n);
	return 0;
}
