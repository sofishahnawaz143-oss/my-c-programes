#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int low=0;int high=4;
	int temp;
	while (low<high){
		temp=a[low];
		a[low]=a[high];
		a[high]=temp;
		low++;
		high--;
	}
	while(low<5){
		printf("%d",a[low]);
	}
	return 0;
}
