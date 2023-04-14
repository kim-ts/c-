#include <stdio.h>
int main()
{
	int i;
	unsigned char a = 50;
	unsigned char p;
	p = 0x80;
	for(i = 0; i<8; i++){
		if (a & p){
			printf("[1]");
		}else{
			printf("[0]");
		}
		p = p>>1;
	}
}