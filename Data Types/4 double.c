#include <stdio.h>

int main(void)

{
    double presyo = 99.99;
    printf("presyo = %.2f\n", presyo);
    printf("laki ng float = %zu\n", sizeof(float));
    printf("laki ng double = %zu\n", sizeof(double));

    printf("presyo = %f\n", presyo);

    return 0;

}
// dito sa lesson na ito ang double naman ay gagamitan ng %f para mapalabas sa printf
// ang double ay parang float pero mas tumpak, 8 byte ang laki nito (ang float ay 4 byte)
// pwede rin gamitin ang %.2f para kontrolin kung ilang numero ang lalabas pagkatapos ng decimal
// ang sizeof() ay nagsasabi kung ilang byte ang kinukuha ng isang type sa memory
// ang %zu ay butas para sa resulta ng sizeof
// BABALA: dapat tugma ang butas sa type. Kapag %zu ang ginamit sa double, mali ang lalabas (1024)
// laging mag-compile gamit ang -Wall para makita ang ganitong pagkakamali