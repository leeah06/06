#include <stdio.h>

int get_integer(void);
int combination(int n, int r);
int factorial(int n);

int main(void)
{
    int n, r;

    n = get_integer();
    r = get_integer();

    if (n < 0 || r < 0 || r > n) {
        printf("Invalid input: need 0 <= r <= n\n");
        return 1;
    }

    printf("C(%d, %d) = %d\n", n, r, combination(n, r));
    return 0;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int factorial(int n)
{
    int i;
    int res = 1;
    for (i = 1; i <= n; i++)
        res *= i;
    return res;
}

int get_integer(void)
{
    int value;
    printf("Enter an integer: ");
    scanf("%d", &value);
    return value;
}