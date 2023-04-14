#include <stdio.h>
#include <string.h>

int main(void)
{
	char input1[5] = "b";
	char input2[5] = "a";
	printf("비교 : %d\n",strcmp(input1,input2));
	return 0;
}