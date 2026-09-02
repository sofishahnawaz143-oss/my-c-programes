#include<stdio.h>
#include<stdlib.h>
int main (){
	int n,i,n2;
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
			scanf("%d",&arr[i]);
		}
		printf("\nelements in an array are :\n");
			for (i=0;i<n;i++){
			printf("%d ",arr[i]);
		}
		free(arr);
	}
	printf("\n enter the new size of an array \n");
	scanf("%d",&n2);
	arr=realloc(arr,n2*sizeof(int));
	if (arr== NULL)
	{
		printf("no more memoery in heap"); 
		
			}
	return 0;
}
