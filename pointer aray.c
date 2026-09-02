#include<stdio.h>
int main(){
	int i;
	int x[5]={1,2,4,5,3};
	int *p;
	p=x;
	for (i=0;i<5;i++){
			printf("%d \n",p);
			p++;
	}

	return 0;
}
