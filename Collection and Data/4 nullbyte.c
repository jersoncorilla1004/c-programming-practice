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
// Sa lesson na ito ang '\0' (null terminator): byte na may halagang 0 sa dulo ng string
// ang while (lagda[i] != '\0') ay nagbabasa hanggang makita ang dulo
// lagda[2] = 0 ay ang nakatagong ikatlong byte ng "MZ"
// ito ang ginagamit ng printf("%s") para malaman kung kailan titigil