#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *pi;
	pi = (int *)malloc(sizeof(int)); //malloc 은 메모리 할당 하라는뜻
									//sizeof(int)는 4byte 
	if(pi == NULL)
	{
		printf("동적메모리할당실패 \n");
		exit(1);
	 } 
	 *pi = 15;
	 printf("%d\n",*pi);
	 
	 free(pi); //동적메모리 할당해제 
	 return 0;
}