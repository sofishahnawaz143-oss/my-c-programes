#include<stdio.h>
void sum(int a, int b){
	printf("the sum is %d \n",a+b);
	
}
void sub(int a, int b){
	printf("the differnce is %d \n",a-b);
	
}
void mul(int a, int b){
	printf("the product is %d \n",a*b);
	
}
void div(int a, int b){
	if (b!=0){
			printf("the division is %f \n", (float)a / b);
	
	}
	else {
		printf("dividion invalid");
	}

}
int main(){
	int a=22;int b=7;
	sum(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}
