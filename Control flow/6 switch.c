#include <stdio.h>

int main(void)
{
    int araw = 3;

    switch (araw)
    {
    case 1:
        printf("Lunes\n");
        break;
    case 2:
        printf("Martes \n");
        break;
    case 3:
        printf("Miyerkules\n");
        break;
    default:
        printf("Hindi kilalang araw \n");
    }
    return 0;
}
// Sa lesson na ito ang switch: tingnan ang halaga ng isang variable at pumili ng case
// case 3 ay para sa halagang eksaktong 3, default ay para sa lahat ng iba pa
// ang break ay tumitigil at lumalabas sa switch
// kapag walang break, bumabagsak (fall-through) ang program sa susunod na case