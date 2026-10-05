#include <stdio.h>

int main(void)
{
    double a = 10;
    double b = 4;

    printf("%f\n", a / b);
    printf("%.2f\n", a / b);
    return 0;

}
// Sa lesson na ito, ginamit ang double para sa division na may decimal
// ang 10 / 4 sa int ay 2, pero sa double ay 2.5
// ang data type ang nagpapasya kung may decimal ang sagot
// %f ay butas para sa double, at %.2f ay nagpapakita ng 2 digit pagkatapos ng decimal