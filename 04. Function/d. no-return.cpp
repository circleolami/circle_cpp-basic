/*
문제:
입력받은 두 실수의 평균을 구하는 기능을 함수를 만들어 구현하세요.
함수의 반환값이 없는 함수를 만드세요.

출력 예제:
첫 번째 실수를 입력하세요
2.3
두 번째 실수를 입력하세요
4.7
결과: 3.500000
*/

#include <stdio.h>
void average(float a, float b);
int main()
{
    float a, b;

    printf("첫 번째 실수를 입력하세요\n");
    scanf("%f", &a);
    printf("두 번째 실수를 입력하세요\n");
    scanf("%f", &b);
    average(a, b);
}

void average(float a, float b)
{
    printf("결과: %f", (a + b) / 2);
}
