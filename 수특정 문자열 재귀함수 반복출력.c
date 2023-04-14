#include<stdio.h>


void print(int count)
{
	if(count == 0)
	{
		return;
	}
	else
	{
		printf("문자열 출력 \n");
		print(count - 1);
	}
 } 

int main(void)
{
	int number;
	printf("출력개수");
	scanf("%d",&number);
	print(number);
	return 0;
}