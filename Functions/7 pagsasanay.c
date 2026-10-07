#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int is_even(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    printf("%d\n", max(3, 9));
    printf("%d\n", max(10, 4));
    printf("%d\n", is_even(6));
    printf("%d\n", is_even(7));
    return 0;
}