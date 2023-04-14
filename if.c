#include <stdio.h>

int main(void)
{
	int x = -150;
	if(x < 0)
	{
		x = -x;
	}
	printf("x = %d\n",x);
	return 0;
}