#include<stdio.h>
 int power(int base,int exp){
	int result=1;
	int i;
	for(i=0;i<exp;i++){
		result=result*base;
	
	}
		return result;
}
int main(){
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int final=0;
	final=power(n, n
	);
	printf("square of num is %d",final);
	return 0;
	
}
