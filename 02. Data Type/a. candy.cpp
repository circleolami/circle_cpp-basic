/*
문제:
민수는 사탕을 5개 구입, 수민이는 사탕을 8개 구입하였다.
민수와 수민이가 구입한 사탕 개수의 합을 출력하세요.

출력예시:
민수와 수민이가 구입한 사탕의 개수는 n개이다.
*/

#include <stdio.h>
int main()
{
    int n, m;

    n = 5;
    m = 8;
    printf("민수와 수민이가 구입한 사탕의 개수는 %d개이다.", n + m);

    return 0;
}