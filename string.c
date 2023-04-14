#include <stdio.h>

int main(void){
	char input[1001];
	gets(input);
	int count = 0;
	while(input[count] != '\0')
	{
		count ++;
		}	
		printf("길이: %d\n",count);
		printf("문자열 : %s",input);
	
	return 0;
}

