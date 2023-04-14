#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i,x,y;
    int** pptr = (int** )malloc(sizeof(int*) * 8); //pptr 은 int가들어갈 수 있는 포인터공간을 8 개들어가게한다.
    for(i=0 ; i<8; i++){
        *(pptr + i)=(int*)malloc(sizeof(int) * 6); //각 포인터 pptr[i] 에 대응하는 int 사이즈공간이 6개씩 있는 배열을 만든다는의미
    }

    for(y = 0; y < 8; y++)
    {
        for(x=0; x < 6; x++)
        {
            *(*(pptr + y) + x) = 6 * y + x;//포인터 pptr[y]의 포인터 즉, [pptr[y]][x] 그러니까 pptr[y][x] 가되고 각각 
                                        //pptr[0][0]=0, pptr[0][1]=1, pptr[0][2]=2 ...... pptr[0][6]=5, pptr[1][0]=6, pptr[1][2]=7, ....... pptr[6][5]=41,pptr[7][0]=42,....pptr[7][5]=47 이렇게들어간다.
        }
    }

    for(y = 0; y<8; y++)
    {
        for(x = 0; x < 6; x++)
        {
            printf("%3d",*(*(pptr + y)+x));
        }
        printf("\n");
    }

    for(y = 0; y < 8; y++)
    {
        free(*(pptr + y));
    }
    return 0;
}