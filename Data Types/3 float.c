#include <stdio.h>

int main(void)

{
    float timbang = 60.5f;
    printf("timbang %f\n", timbang);

    printf("timbang %.2f\n", timbang);
    printf("timbang %.1f\n", timbang);
    printf("timbang %.0f\n", timbang);


    return 0;
}

// dito sa lesson na ito ang Float (float)naman ay gagamitan ng %f\n para mapalabas sa prinf 
// sa simpleng %f\n ay madamin numbers ang lalabas like 60.500000
// pero pwede mo ito controlin gamit ang %.(bilang ng gusto mong palabasin)\n
// halimbawa %.2f\n ang lalabas 60.50
// halimbawa %.1f\n ang lalabas 60.5
// halimbawa %.0f\n ang lalabas 60