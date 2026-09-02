#include<stdio.h>
int main(){
	#ifndef pi
	printf("pi is not defined ");
	#else
	printf("pi is  defined");
	#endif
	return 0;
}
