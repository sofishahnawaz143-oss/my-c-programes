#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,n;
	printf("enter size of array");
	scanf("%d ",&n);
	ptr=(int*)malloc(n*sizeof(int));
		int i;
		for (i=0;i<n;i++){
			ptr[i] = i;
		}
		for (i=0;i<n;i++){
			printf("%d ",ptr[i]);
		}
		
	free(ptr);
	return 0;
}
