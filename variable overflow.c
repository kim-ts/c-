#include <stdio.h>
#include <limits.h>  //변수의 한계점 한계값을 포함하는 라이브러리
 

int main(void)
{
	int x = INT_MAX;
	printf("int형의 최댓값 x는 %d입니다.\n",x);
	printf("x+1은? %d .\n",x+1);  //오버플로우 개념 최댓값에서 +1을 했으므로 최솟값이반환됨 
	return 0;
}