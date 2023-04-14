#include <stdio.h>

int main(void)
{
	int x = 100;
	printf("x는 %d.\n",x);
	x += 50; //x = x+50
	printf("x는 %d.\n",x);
	x -= 50; // x= x-50
	printf("x는 %d.\n",x);
	x *= 50; //x = =x*50
	printf("x는 %d.\n",x);
	x /= 50;
	printf("x는 %d.\n",x);
	x %=3;
	printf("x는 %d.\n",x);
	int y = 5000;
	y %= 3;
	printf("%d",y);
	
	return 0;
}