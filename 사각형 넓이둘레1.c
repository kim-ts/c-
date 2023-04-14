#include <stdio.h>
#include <math.h>

struct point{
	int x;
	int y;
};


int main(void){
	struct point p1,p2;
	int w, h, area, peri;
	double distan;
	
	printf("1번 점 좌표: ");
	scanf("%d %d",&p1.x,&p1.y) ;
	printf("2번 점 좌표 : ");
	scanf("%d %d",&p2.x,&p2.y);
	
	w = abs(p1.x -p2.x);
	h = abs(p1.y - p2.y);
	area = w * h;
    peri = 2*w + 2*h;

	
	printf("area = %d, peri = %d",area,peri);
	
	return 0;
}