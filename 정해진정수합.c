#include <stdio.h>

int main(void)
{
	int number,x,i,sum =0;
	printf("정수 개수 :");
	scanf("%d",&number);
	for(i = 0 ; i < number; i++ )
	{
		printf("정수의 값:");
		scanf("%d",&x);
		sum += x;
	 } 
	 printf("전체정수값은 %d\n",sum);
	return 0;

 } 