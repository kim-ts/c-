#include <stdio.h>

int main(void)
{
	char o;
	int x,y;
	while(1)
	{
		printf("식: ");
		scanf("%d %c %d",&x,&o,&y);
		if(o == '+')
		{
			printf("%d %c %d = %d\n",x,o,y,x+y);
		}
		else if(o == '-')
		{
			printf("%d %c %d = %d\n",x,o,y,x+y);
		}
		else if(o == '*')
		{
			printf("%d %c %d = %d\n",x,o,y,x+y);
		}
		else if(o == '/')
		{
			printf("%d %c %d = %d\n",x,o,y,x+y);
		}
		else if(o == '%')
		{
			printf("%d %c %d = %d\n",x,o,y,x+y);
		}
		else
		{
			printf("오류");
		}
		getchar(); // 버퍼주는 곳 만약 이것이설정되어있지않으면 
		//바로 위의 if 문에서 수식을 다적고 엔터를 쳤을때
		//그 엔터도 입력이되서 바로 다음 if에입력됨 
		printf("exit? (y/n)");
		scanf("%c",&o);
		if(o == 'n' || o =='N')
		{
			continue;
		 } 
		 else if(o == 'y' || o == 'Y')
		 {
		 	break;
		 }
		 else
		 {
		 	printf("error");
		 }
	}
	return 0;
}