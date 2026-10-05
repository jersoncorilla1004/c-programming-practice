#include <stdio.h>

int main(void)
{
    int edad = 15;

    printf("edad %d\n", edad);
    if (edad >= 13 && edad <= 19)
    {
        printf("Teenager ka\n");
    }
    else
    {
        printf("Hindi ka Teenager\n");
    }
    return 0;
}
// Sa lesson na ito ang && sa loob ng if: PAREHONG condition ay dapat totoo
// edad >= 13 && edad <= 19 ay totoo lang kapag nasa pagitan ng 13 at 19
// kapag may isang mali, tatakbo ang else
// subukan ang mga hangganan: 12, 13, 19, 20