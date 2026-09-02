#include<stdio.h>
int main(){
	int n,i;
	printf("enter a  size of an array");
	scanf("%d",&n);
	int a[n];
	printf("enter elements of an array\n");
	while (i<n){
	scanf("%d",&a[i]);
	i++;
}
printf("elements of an array are\n ");
i=0;
	while (i<n){
	printf("%d",a[i]);
	i++;
}

	return 0;
}
