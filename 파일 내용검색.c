#include <stdio.h>
#include <string.h>

int main(void){
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("파일이름 : ");
	scanf("%s", fname);
	printf("탐색 단어 : ");
	scanf("%s", word);
	
	if((fp = fopen(fname, "r")) == NULL)
	{
		fprintf( stderr,"파일 %s 를 열수없습니다. \n",fname);
		
	}
	
	while(fgets(buffer, 256, fp))
	{
		line++;
		if(strstr(buffer, word))//strstr(1,2) 2가 1에 들어있다 라는 뜻 
		{
			printf("라인 %d : 단어 %s 발견 \n",line,word);
		}
	}
	fclose(fp);
	return 0;
}