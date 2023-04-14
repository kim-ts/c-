#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char));//char는 하나의 문자가 들어갈 수 있는공간 100 * sizeof(char)는 100개의 문자가 들어갈 수 있는공간이란뜻 malloc(100*sizeof(char))는그만큼을 동적메모리 할당하라는의미이다. 
	
	if(pc == NULL)
	{
		printf("동적메모리할당실패 \n");
		exit(1);
	}
	
	/* pc 가 가르키는 포인터를 1씩 증가시키며 알파벳 소문자 삽입.*/
	for(i = 0; i < 26; i++)
	{
		*(pc + i) = 'a' + i; //pc 포인터로 그 위치를 하나씩 다음 위치로 옮기면서 첫칸에는 a 그다음 칸에는 a + i로  ascii 코드로 b,c,d,... 이런식으로 들어가게된다.
	}
	*(pc + i) = 0; // ascii 코드에서 0은 NULL 
	
	printf("%s\n",pc);
	free(pc);
	return 0; 
}