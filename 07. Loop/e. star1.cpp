/*
문제:
아래 그림과 같이 별을 출력하세요

출력 예제:
*****
*****
*****
*****
*****
*/

#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
            printf("*");
        printf("\n");
    }
    return 0;
}