/*
문제:
아래 그림과 같이 별을 출력하세요

출력 예제
    *
   **
  ***
 ****
*****
*/

#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
            printf(" ");
        for (int j = 0; j < i + 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}