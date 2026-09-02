#include<stdio.h>
#include<math.h>
int main(){

	int arm();
	int result=arm();
	if (result==1){
		printf("number is arm strong");
	}
	else{
		printf("not arm strong number");
	}
	return 0;
}

int arm(){
	int n,digit,i,r,result=0;
printf("enter a number to check for aram strong ");
scanf("%d",&n);
int orgi=n;
while(n>0){
	n/10;
	digit++;
	n=n/10;}
	int n2=orgi;
	while(n2>0){
		r=n2%10;
		result=result+pow(r,digit);
		n2=n2/10;
	}
	if (result==orgi){
		return 1;
	}
	else {
		return 0;
	}
	

}

