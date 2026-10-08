#include <stdio.h>

int main(void)
{
    int numero[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("numero[%d] = %d\n", i, numero[i]);
    }
    return 0;
}
// Sa lesson na ito ang array at for loop: gamitin ang i bilang numero ng drawer
// for (int i = 0; i < 5; i++): magsimula sa 0, tumigil bago ang 5
// numero[i] ay nagbubukas ng drawer na may numerong i
// kapag i <= 5, may numero[5] na wala sa array (out-of-bounds), basura ang lalabas
// hindi sasabihan ng compiler ang out-of-bounds, ikaw ang mag-iingat