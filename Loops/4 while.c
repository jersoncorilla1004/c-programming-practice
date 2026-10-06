#include <stdio.h>

int main(void) {
    int i = 10;

    while (i <= 5) {
        printf("i = %d\n", i);
        i++;
    }
    return 0;
}
// Sa lesson na ito: i = 10 at while (i <= 5), WALANG lumabas
// sinusuri agad ang condition bago pumasok, mali na, kaya hindi tumakbo kahit isang beses
// ito ang pagkakaiba sa do-while na laging tumatakbo kahit isang beses