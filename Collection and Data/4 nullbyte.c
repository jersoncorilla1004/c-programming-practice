#include <stdio.h>

int main(void){
    char lagda[] ="MZ";
    int i = 0 ;

    while (lagda[i] != '\0') {
        printf("lagda[%d] = %c (%d)\n", i, lagda[i],lagda[i]);
        i++;

    }
    printf("lagda[%d] = %d (and dulo)\n", i, lagda[i]);
    return 0;

}
// Sa lesson na ito ang string: array ng char na may '\0' (halagang 0) sa dulo
// %s ay butas para sa buong string, %c para sa isang char, %d para sa numero ng char
// char lagda[] = "MZ"; ay 3 byte: 'M' (77), 'Z' (90), '\0' (0)
// kaya sizeof ay 3, hindi 2
// ang '\0' ang nagsasabi sa printf kung kailan titigil