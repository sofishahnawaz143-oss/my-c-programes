#include<stdio.h>
int fab(int n){
	if (n==0)
	return 0;
	else if (n==1)
	return 1;
	else
	return fab(n-1)+fab(n-2);
}
int main(){
	printf("enter a end term of fabonachei series");
	int num,i,result=0;
	scanf("%d",&num);
	for (i=0;i<num;i++){
		printf("%d ",fab(i));
	}
	return 0;
}
