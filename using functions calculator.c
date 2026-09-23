#include<stdio.h>
void add(int x,int y);
void sub(int x,int y);
void pro(int x,int y);
void div(int x,int y);
void mod(int x, int y);
int main(){
	int a, b;
	printf("enter two numbers u want to add, subtract, multiply and divide\n");
	scanf("%d %d",&a,&b);
	add(a,b);
	sub(a,b);
	pro(a,b);
	div(a,b);
	mod(a,b);
	return 0;
}
void add(int x ,int y){
	printf("the sum of %d and %d is : %d\n",x,y,x+y);
}
void sub(int a, int b){
	printf("the diffrence of %d and %d is : %d\n",a,b,a-b);
}
void pro(int a, int b){
	printf("the product of %d and %d is : %d\n",a,b,a*b);
}
void div(int a, int b){
	if (b==0){
		printf("invalid division denominator cant be 0");
	}
	printf("the  cofficient %d and %d is : %d\n",a,b,a/b);
}
void mod(int a, int b){
	if (b==0){
		return;
	}
	printf("the  remaider %d and %d is : %d\n",a,b,a%b);
}
