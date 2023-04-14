#include <stdio.h>

int main(void)
{
	// 윤년 구하기 4년마다 그렇지만 100년단위떄는 윤년해당안댐
	// 윤녕 400단위때는 어떤상황이던 윤년으로 설정
	int year = 2016;
	if((year%4 == 0 && year % 100 !=0) || year % 400 == 0)
	{
		printf("%d는 윤년이다.\n",year);
	}
	else
	{
		printf("%d는 윤년아님 .\n",year);
	 } 
	 return 0;
}