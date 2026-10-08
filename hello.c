#include <stdio.h>

int factorial(int n)
{
    int i;
    int res = 1;
    for (i = 1; i <= n; i++)
        res *= i;
    return res;
}

int combination(int n, int r)
{
    int up, down;

    up = factorial(n);
    down = factorial(n - r) * factorial(r);

    return up / down;
}

int main(void)
{
    //변수 선언 ---
    int result;
    int n, r;

    //입력 받기 ----
    //n 입력 문구 찍기
    printf("input n :");
    //scanf n
    scanf("%i", &n);

    //r 입력문구 찍기
    printf("input r :");
    //scanf r
    scanf("%i", &r);

    //계산
    result = combination(n, r);

    //결과 출력
    printf("C(%i, %i) = %i\n", n, r, result);

    return 0;
}