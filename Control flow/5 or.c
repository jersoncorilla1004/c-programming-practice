#include <stdio.h>

int main(void)
{
    int edad = 5;

    printf("edad %d\n", edad);
    if (edad < 13 || edad > 19)
    {
        printf("hindi kana teenager\n");
    }
    else
    {

        printf("teenager ka\n");
    }
    return 0;
}
// Sa lesson na ito ang || (O) sa loob ng if: sapat na ang KAHIT ISA na totoo
// edad < 13 || edad > 19 ay totoo kapag mas bata sa 13 O mas matanda sa 19
// 13 at 19 ay teenager dahil parehong mali ang dalawang tanong
// && ay parehong totoo, || ay kahit isa