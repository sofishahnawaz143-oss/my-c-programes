#include<stdio.h>
int main(){
	int even();
	int a=even();
	if (a==1){
		printf("even array");
	}
	if (a==0){
		printf("odd array");
	}
	
return 0;}
int even (){
int n,i;
	printf("enter a  size of an array");
	scanf("%d",&n);
	int a[n];
	printf("enter elements of an array\n");
	while (i<n){
	scanf("%d",&a[i]);
	i++;
}
i=0;
while(i<n)
if (a[i]%n==0){
	return 1;
}
else{
	return 0;
}
}

