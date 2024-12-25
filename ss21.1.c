#include<stdio.h>

int main(){
	FILE *fptr;
	fptr=fopen("bt01.txt","w");
	printf("moi ban nhap : ");
	char chuoi[50];
	gets(chuoi);
	
	fprintf(fptr,"chuoi ban vua nhap la %s",chuoi);
	fclose(fptr);


  return 0;
}

