#include <stdio.h>
#include <stdlib.h>


struct book //책이름과 번호로 구성된 구조체
{
    int number;
    char title[100];
};

void showBook(struct book *p,int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("number %d : %s\n",(p + i)->number,(p + i)->title);
    }
}

int main(void)
{
    struct book *p; //p 라는변수로 구조체하나 만들고 포인터 시킴
    p = (struct book *)malloc(2 * sizeof(struct book)); //구조체의 2개만큼 사이즈 준다.
    if(p == NULL)
    {
        printf("동적메모리할당실패 \n");
        exit(1);
    }
    p->number = 1; //p라는구조체의 number 라는변수에 1이라는값 넣어준다. 구조체는 . 이아니라 -> 로 변수를 매칭시켜준다.
    strcpy(p->title, "C programming"); //

    (p + 1)-> number = 2;
    strcpy((p + 1)->title,"Data Structure");

    showBook(p, 2);
    free(p);
    return 0;
}