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
// Sa pagsasanay na ito: max at is_even, gamit ang if, else, return, at %
// max(a, b): ibinabalik ang mas malaki
// is_even(n): ibinabalik ang 1 kung even at 0 kung odd
// !(n % 2) at n % 2 == 0 ay pareho ang ibig sabihin: walang sobra
// kapag walang panaklong, ang !n % 2 ay magkaiba (binabaligtad muna ang n)
// hindi sasabihin ng compiler kung baliktad ang logic, ikumpara ang output sa inaasahan