#include<stdio.h>
void main(){
	int *ptr;
	int i;
	int a[5]={2,3,4,5,6};
	ptr=a;
	for(i=0;i<5;i++){
		printf("%d ",*ptr);
		ptr++;
	}
}
