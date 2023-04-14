#include <stdio.h>

int main(void)
{
	char x ='A';
	int xx = 65; //int 로변수를 설정하더라도 char로 출력시키면 글자로나옴 
	printf("%c\n",xx);
	char y =65;    //숫자를 char로 출력시키면 아태스키코드값으로변환된 글자가나온다. 
	printf("%c\n",x);
	printf("%c\n",y);
	char z = 'B';
	printf("%d\n",z);  //마찬가지로 char변수이면서 글자여도 출력을 정수형로하면 숫자가나온다 
	return 0;
}