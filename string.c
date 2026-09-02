#include<stdio.h>
#include<string.h>
int main (){
	char a[]="hello";
	char b[]="world";
	char f[10];
	strcat(a,b);
		printf("%s",a);
	
		strcpy(f,a);
		printf("%s",f);
		
	return 0;
}
