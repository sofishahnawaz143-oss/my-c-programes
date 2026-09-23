#include<stdio.h>
int main(){
	int i;
	int n;
	printf("enter the size of an array \n");
	scanf("%d",&n);
	int x[n];
	printf("emter the %d elements in array one by one \n",n);
	for (i=0;i<n;i++){
			scanf("%d",&x[i]);
			
	}
	int *ptr;
	ptr=x;
	printf("elements in an array are \n");
	for (i=0;i<n;i++){
			printf("%d \n",*ptr);
			ptr++;
	}
	return 0;
}
