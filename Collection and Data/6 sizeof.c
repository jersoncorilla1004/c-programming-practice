#include <stdio.h>

struct tao {
    char inisyal;
    int edad;
};

int main(void) {
    printf("char = %zu\n", sizeof(char));
    printf("int  = %zu\n", sizeof(int));
    printf("struct tao = %zu\n", sizeof(struct tao));
    return 0;
}

// Sa lesson na ito ang sukat ng struct: sizeof(struct tao) ay 8, hindi 5 (1 + 4)
// nagdagdag ang compiler ng 3 byte na padding pagkatapos ng char
// alignment: ang int ay gustong magsimula sa posisyong multiple ng 4
// mahalaga ito sa PE header, dahil may eksaktong posisyon ang bawat field