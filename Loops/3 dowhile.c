#include <stdio.h>

int main(void)
{
    int i = 10;

    do
    {
        printf("i = %d\n", i);
        i++;
    } while (i <= 5);
    return 0;
}

// Sa lesson na ito ang do-while: tatakbo MUNA, saka susuriin ang condition
// kaya laging tatakbo kahit isang beses, kahit mali na agad ang condition
// may ; sa dulo ng while (...);
// i = 10 at while (i <= 5): lumabas pa rin ang i = 10 nang isang beses
// while at for: sinusuri BAGO ang ikot, do-while: sinusuri PAGKATAPOS