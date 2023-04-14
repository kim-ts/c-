#include <stdio.h>

int main(void)
{
	int score = 85;
	if(score >= 90)
	{
		printf("학점A\n");
	}
	else if(score >=80)
	{
		printf("B");
	}
	else if(score >= 70)
	{
		printf("C");
	}
	else
	{
		printf("F");
	}
}