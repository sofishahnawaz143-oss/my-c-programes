#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,i,newn;
	int *ptr;
	int *newptr;
	printf("enter the number of elements of an array \n");
	scanf("%d",&n);
	ptr=(int *) malloc(n*sizeof(int));
	if (ptr == NULL){
		printf("no memory in heaf");
	}
		for (i=0;i<n;i++){
			ptr[i]=i;
		}
	   printf("elements in array are \n");
		for (i=0;i<n;i++){
		printf("%d ",ptr[i]);
		}
		printf("\n enter the new size of an array \n");
		scanf("%d",&newn);
		newptr=ptr;
		newptr= (int *)realloc(newptr,newn*sizeof(int));
		if(newptr == NULL || newn<=n){
			printf("\n no more memeory in heap or the new size is less or equal prevous size \n The prevous elements in an array are \n");
			for(i=0;i<n;i++){
		printf("%d ",ptr[i]);
		}
		return ;
		}
			for (i=n;i<newn;i++){
				newptr[i]=i;
			}
			printf("elements in new sized array are \n");
		for (i=0;i<newn;i++){
		printf("%d ",newptr[i]);
		}
		free(newptr);
		free(ptr);
}
