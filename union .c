#include<stdio.h>
union student  {
	char name[20];
	int rollno;
	float marks;
};
int main(){
	union student s[100]; 
		int n,i,j;
		printf("enter a number of students: \n ");
		scanf("%d",&n);
		printf("enter %d students record : \n ",n);
		for (i=0;i<n;i++){
			for (j=1;j<=n;j++){
			
			printf("enter student %d name :",j);
			scanf("%s",&s[i].name);
			printf("\nstudent  %d name : %s \n",j,s[i].name);
			printf("enter student %d rollno. :",j);
			scanf("%d",&s[i].rollno);
			printf("student %d rollno.:%d \n",j,s[i].rollno);
			printf("enter student %d marks:",j);
			scanf("%f",&s[i].marks);
			printf("student %d marks:%f \n",j,s[i].marks);
			} break;	
		}
	return 0;
}
