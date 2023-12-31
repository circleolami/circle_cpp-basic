/*
문제:
여행지 목록 프로그램을 만드세요.
만약 여행지 목록에 없는 번호를 선택했다면 목록에 있는 여행지를 선택할 때까지 여행지 목록을 다시 출력하세요.

출력 예제:
당신이 가고 싶은 곳은 어디인가요?
1. 괌
2. 파리
3. 두바이
4. 피렌체
5. 뉴욕
가고 싶은 곳의 번호를 선택하세요
6
당신이 가고 싶은 곳은 어디인가요?
1. 괌
2. 파리
3. 두바이
4. 피렌체
5. 뉴욕
가고 싶은 곳의 번호를 선택하세요
2
지금 바로 파리로 여행을 떠나세요!
*/

#include <stdio.h>
int main()
{
    int num;

    while (1)
    {
        printf("당신이 가고 싶은 곳은 어디인가요?\n");
        printf("1. 괌\n2. 파리\n3. 두바이\n4. 피렌체\n5. 뉴욕\n");
        printf("가고 싶은 곳의 번호를 선택하세요\n");
        scanf("%d", &num);
        if (num >= 1 && num <= 5)
            break;
    }
    switch (num)
    {
    case 1:
        printf("지금 바로 괌으로 여행을 떠나세요!");
        break;
    case 2:
        printf("지금 바로 파리로 여행을 떠나세요!");
        break;
    case 3:
        printf("지금 바로 두바이로 여행을 떠나세요!");
        break;
    case 4:
        printf("지금 바로 피렌체로 여행을 떠나세요!");
        break;
    case 5:
        printf("지금 바로 뉴욕으로 여행을 떠나세요!");
        break;
    }
    return 0;
}