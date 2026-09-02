#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,n;
	printf("enter isze of array");
	scanf("%d",&n);
	if (*ptr == 0){
		printf("array is not created ");
	}
	else {
		ptr=(int*)malloc(n*sizeof(n));
		int i,j;
		for (i=0;i<n;i++){
			ptr[i]=i;
		}
		for (j=0;j<n;j++){
			printf("%d",ptr[j]);
		}
	}
	return 0;
}
