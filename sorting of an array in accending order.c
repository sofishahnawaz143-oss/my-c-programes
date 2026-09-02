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
	printf("%d\n",a[i]);
	i++;
}
int temp,j;
for (i=0;i<n;i++){

	for (j=i+1;j<n;j++){
		if (a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}	
}
printf("sotrted array are\n ");
i=0;
	while (i<n){
	printf("%d\n",a[i]);
	i++;
}

      


	return 0;
}
