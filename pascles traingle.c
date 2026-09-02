//#include <stdio.h>
//int main(){
//	int n=5,i,j;
//	for (i=1;i<=5;i++){
//		for (j=1;j<=5-i;j++){
//			printf("  ");
//		}
//		for(j=1;j<=2*i-1;j++){
//			if (j<=i){
//				printf("%d ",j);
//			}
//			else {
//				printf("%d ",2*i-j);
//			}
//		}
//		printf("\n");
//	}
//	
//	return 0;
//	
//}
#include <stdio.h>
int main(){
	int n=5,i,j,k;
	for (i=1;i<=5;i++){      //1,2,3,4,5
		for (j=1;j<=5-i;j++){   //1 ,2,3,4..1,2,3<=5-2...1,2<=5-3..1<=5-1 no space for i=5
			printf("  ");       
		}
		for(j=1;j<=i;j++)      //1..1,2<=2...1,2,3<=3...1,2,3,4<=4...1,2,3,4,5
		{
			printf("%d ",j);     
			}
			for(k=i-1;k>=1;k--){//2-1=1>=1....3-1=2,k--,1>=1....4-1=3,2,1....5-1=4,3,2,1
				printf("%d ",k);
			}
		printf("\n");
	}
	
	return 0;                                 //spacespacespacespace1
	                                        //  spacespacespace1    2   1
	                                        //  spacespace 1   2    3   2   1
	                                        //  space 1    2   3    4   3   2    1
	                                        //     1  2    3    4   5   4   3    2    1 
}
