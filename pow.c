
#include <stdio.h>
#include <math.h> //pow(),abs()
int main(void)
{
	double x = pow(2.0,20.0); //2^20
	printf("%.0f\n",x); // .0f 면 소수점 0자리까지출력 즉, 정수만출력 
	return 0;
}