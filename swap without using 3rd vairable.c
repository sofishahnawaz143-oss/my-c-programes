#include<stdio.h>
int swap(int a,int b){
a=a+b;//15
b=a-b;//10
a=a-b;//
printf("%d %d",a,b);

}


int main(){
	int a,b;
	a=10;
	b=5;
	swap(a,b);
	
}
