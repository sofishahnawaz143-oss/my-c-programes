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
		printf("\nenter the new size of an array\n");
		scanf("%d",&newn);
		newptr=ptr;
		newptr= (int *)realloc(newptr,newn*sizeof(int));
		if(newptr == NULL){
			printf("\n no more memeory in heap \n and the prevous elements in an array are \n");
			for(i=0;i<n;i++){
		printf("%d ",ptr[i]);
		}
		}
		if(newn>n){
			for (i=n;i<newn;i++){
				newptr[i]=i;
			}
		}
		else {
			printf("new size is <then old array size\n");
			printf(" and elements in your new size array are \n");
		}
		printf("elements in array are \n");
		for (i=0;i<newn;i++){
		printf("%d ",newptr[i]);
		}
		free(newptr);
}
