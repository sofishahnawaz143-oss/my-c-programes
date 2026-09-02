#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("student .text","w");
	fprintf(fp,"name=shahnawaz \n");
	fprintf(fp,"roll no.=250445 \n");
	fprintf(fp,"adress=jahama \n");
	fclose(fp);
//	if (fp == NULL){
//		printf("error in creating a file");
//	}
//	else{
//		printf("file created sucessfuly");
//	}
	char data[100];
	fp=fopen("student .text","r");
	while(fgets(data,sizeof(data),fp)){
		printf("%s",data);
	}
	fclose(fp);
	fp=fopen("student .text","a");
	fprintf(fp,"attendence = 90%");
	if (fp == NULL){
		printf("error in apending data");
	}
	else{
		printf("data appended sucessfuly");
	}
	fclose(fp);
	
	
	
	return 0;
}
