/*
λ¬Έμ :
????? κ°μ΄ μΆλ ₯??λ‘? printf ?¨?λ₯? ?¬?©??Έ?.

μΆλ ₯?? :
10
3.400000
3.5
3.4000000000
10κ³? 20? ?©??? 30???€.
3.4-1.2 = 2.2
*/

#include <stdio.h>
int main()
{
    int n = 10, m = 20;
    float a = 3.4, b = 3.5, c = 1.2;

    printf("%d\n%f\n%.1f\n%.10f\n", n, a, b, a);
    printf("%d°ϊ %dΐΗ ΗΥΐΊ %dΐΤ΄Ο΄Ω\n", n, m, n + m);
    printf("%.1f-%.1f = %.1f", a, c, a - c);

    return 0;
}