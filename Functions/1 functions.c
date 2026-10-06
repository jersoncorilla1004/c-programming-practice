#include <stdio.h>

void kamusta(void) {
    printf("Kamusta!\n");
}

int lima(void) {
    return 5;
}

int main(void) {
    kamusta();
    kamusta();
    printf("%d\n", lima());
    return 0;
}
// Sa lesson na ito ang function: pangalang ibinibigay sa grupo ng code para magamit ulit
// void kamusta(void): walang ibinabalik (void) at walang tinatanggap (void)
// kamusta(); ay TUMATAWAG sa function, tatakbo ang nasa loob nito
// case-sensitive: Kamusta at kamusta ay magkaibang pangalan
// nasa itaas ng main ang function para kilala na ito bago tawagin

// Sa lesson na ito ang function: pangalang ibinibigay sa grupo ng code para magamit ulit
// void kamusta(void): walang ibinabalik at walang tinatanggap, nagpi-print lang
// int lima(void): may ibinabalik na int, kaya ang lima() ay nagiging numerong 5
// kamusta(); ay TUMATAWAG sa function, tatakbo ang nasa loob nito
// nasa itaas ng main ang function para kilala na ito bago tawagin
// case-sensitive: Kamusta at kamusta ay magkaibang pangalan