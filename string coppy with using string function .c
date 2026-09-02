#include<stdio.h>
int main (){
	int n;
	printf("enter the size of string array \n ");
	scanf("%d",&n);
	char a[n];
	int i;
	printf("enter the elements of ist string array \n");
	for(i=0;i<n;i++){
		scanf(" %c", &a[i]);
	}
	a[n]= '\0';
	int n2;
	printf("enter the size of 2nd string array \n ");
	scanf("%d",&n2);
	char b[n2];
	printf("enter the elements  of 2nd string array \n");
	for(i=0;i<n2;i++){
		scanf(" %c", &b[i]);	
	}
	b[n2]= '\0';
	int j;
	char c[n+n2+1];
	for(i=0;a[i] != '\0';i++){
		c[i]=a[i];
	}
	for(j=0;b[j] != '\0';j++,i++){
		c[i]=b[j];
	}
	c[i]= '\0';
	printf("merged string is %s",c);

	return 0;
}
