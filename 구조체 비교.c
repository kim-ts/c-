#include <stdio.h>

struct point {
	int x;
	int y;
	
}; 

void comparepoint (struct point p1, struct point p2) {
	if((p1.x == p2.x) && (p1.y == p2.y)){
		printf("p1 = p2");
	}
}

int main(void)
{
	struct point p1;
	struct point p2; 
	p1.x = 30;
	p1.y = 10;
	p2.x = 30;
	p2.y = 10;
	
	/*
	if (p1 == p2)
	{
		printf("");
		이런식으로 구조체를 직접비교는 불가 
	}
	*/
	
	comparepoint(p1,p2);
	
	return 0;
}