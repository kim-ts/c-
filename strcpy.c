#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[10] = "dfasdfaf";
	char result[5] = "asdf";
	strcpy(result, input);
	printf("복사 : %s\n",result);
	return 0;
}