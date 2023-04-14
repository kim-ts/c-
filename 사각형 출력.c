#include <stdio.h>
#define N 10

int main(void)
{
	int i,j;
	for(i =0 ; i<N; i++)// (초기화 초기값 ,조건식 ,반복하면서 연산하는부분) 
	{
		for(j = 0; j<N; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}