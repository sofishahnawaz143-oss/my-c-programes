#include <stdio.h>
int main (){
	
	int rows1,coloms1,rows2,coloms2;
	printf("enter the rows and columns of 1st matrixs \n ");
	scanf("%d %d",&rows1,&coloms1);
	int mat[rows1][coloms1];
	printf("enter the rows and columns of 2nd matrix \n");
	scanf("%d %d",&rows2,&coloms2);
	int mat2[rows2][coloms2];
	int mat3[rows1][coloms2];
	int r,c,k;
	if (coloms1==rows2  ){
	printf("enter elements of ist matrix\n");
	for(r=0;r<2;r++){
		for (c=0;c<3;c++){
			scanf("%d",&mat[r][c]);
		}
	}
	printf("enter elements of 2nd matrix\n");
	for(r=0;r<3;r++){
		for (c=0;c<2;c++){
			scanf("%d",&mat2[r][c]);
		}
	}

	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			 mat3[r][c]=0;
			for(k=0;k<3;k++){
				mat3[r][c]=mat3[r][c]+mat[r][k]*mat2[k][c];
				
			}
		}
	}
	printf("multiplycation of matrix are \n");
	for(r=0;r<2;r++){
		for (c=0;c<2;c++){
			printf("%d ",mat3[r][c]);
		}
		printf("\n");}
	}
	else {
		printf("multiplycation of two matrixes is not possible because the size of matrixes are invalid ");
	}
	return 0;
}













































