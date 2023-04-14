#include <stdio.h>

int main(void)
{
	int x = 50, y = 30 ;
	printf("x가 y보다 크고 y 는 40 미만인가? %d\n",(x>y) &&(y<40));
	printf("x가 y보다 작거나 혹은  y가 30 인가? %d\n",(x < y) || (y == 30));
	printf("x가 50이 아닌가?  %d\n",x != 50);
	return 0; 
	
 } 