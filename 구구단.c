#include <stdio.h>

int main(void)
{
	int x,i;
	printf("정수입력:");
	scanf("%d", &x);
	for(i =1;i<=9;i++)
	{
		printf("%d x %d = %d\n",x,i,x*i);
	}
	return 0; 
 } 