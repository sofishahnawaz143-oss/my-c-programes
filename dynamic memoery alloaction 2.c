#include<stdio.h>
#include<stdlib.h>
int main (){
	int n,i;
	int *arr;
	printf("enter the size of an arary \n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	if (arr == NULL){
		printf("no memory in heaf ");
	}
	else {
		printf("enter %d number of elements \n",n);
		for (i=0;i<n;i++){
			scanf("%d",arr[i]);
		}
		printf("\n elements in an array are :\n");
			for (i=0;i<n;i++){
			printf("%d",arr[i]);
		}
	}
	
	return 0;
}
