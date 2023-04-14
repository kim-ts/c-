#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	//x 가 y 와 같은 값을 가지고 있는가?
	// x = y -> x와 y가 같은 상황
	// x == y -> ture, x와 y가 같은 값을 가지고 있는것
	printf("x와 y가 같은가 ? %d\n",x == y); // 0은 false 1은 true 
	printf("x와 y가 다른가 ? %d\n", x!=y);
	printf("x가 y보다 큰가 ? %d\n", x > y);
	printf("x가 y보다 작은가 ? %d\n", x < y);
	printf("x에 y값을 넣으면  ? %d\n", x = y); // %d 에 x 가 들어가는데 이때 x=y 값으로 들어가고 출력임 
	if(x == y) //이런식으로 사용함  
	return 0; 
}