#include <stdio.h>

int main(void)
{
    int edad = 20;
    printf ("edad %d\n", edad);
    if (edad >= 18) {
        printf("Matanda na \n");

    }
    return 0;

}
// Sa lesson na ito ang if: kung TOTOO ang nasa loob ng ( ), tatakbo ang nasa loob ng { }
// edad >= 18 ay totoo kapag 20, kaya lumabas ang "Matanda na"
// kapag MALI ang tanong, lalaktawan ang buong { }