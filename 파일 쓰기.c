#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	fp = fopen("C:\\Users\\%USERPROFILE%\\Desktop\\output.txt","w");
	
	if(fp == NULL)
	{
		printf("실패\n");
	}
	else{
		printf("성공\n");
	}
	fputc('H', fp);
	fputc('esf',fp);
	fputc('45',fp);
	fputc('l',fp);
	
	fclose(fp);
	return 0; 
 } 