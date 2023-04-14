#include <stdio.h>
#include <math.h>

struct point{
	int x;
	int y;
};


int main(void){
	struct point p1,p2;
	int xdif,ydif;
	double distan;
	
	printf("1번 점 좌표: ");
	scanf("%d %d",&p1.x,&p1.y) ;
	printf("2번 점 좌표 : ");
	scanf("%d %d",&p2.x,&p2.y);
	
	xdif = p1.x -p2.x;
	ydif = p1.y - p1.x;
	
	distan = sqrt(xdif * xdif + ydif * ydif) ;
	printf("distance : %f",distan);
	
	return 0;
}