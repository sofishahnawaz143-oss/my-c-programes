#include<stdio.h>
int main(){
	int n,a,c,s=0;
	printf("enter a number");
	scanf("%d",&n);
	c=n;
	while(n>0){
		a=n%10;
		s=a+s*10;
		n=n/10;
	}
	if (c==s){
		printf("the number is tricpo");
	}
	else {
		printf("not");
	}
	return 0;
}
