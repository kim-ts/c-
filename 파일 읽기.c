#include <stdio.h>



int main(void){
	FILE *fp = NULL;
	int c;
	
	fp = fopen("input.txt", "r");
	
	if(fp == NULL)
	{
		printf("파일열기실패 \n");
		 
	}else{
		printf("성공 \n");
	}
	while((c = fgetc(fp)) != EOF) /*fgetc 는 글자하나씩가져오는것 EOF는end of file 이라는뜻으로 파일의 끝을 의미*/
	{
		putchar(c);
	}
	fclose(fp);


	
	return 0;
}