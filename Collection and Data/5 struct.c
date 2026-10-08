#include <stdio.h>

struct tao
{
    char inisyal;
    int edad;
};

int main(void) {
    struct tao a;
    a.inisyal = 'J';
    a.edad = 25;

    printf("%c %d\n", a.inisyal, a.edad);
    return 0;
}

// Sa lesson na ito ang struct: pakete ng magkakaugnay na datos na maaaring magkakaiba ang type
// struct tao { char inisyal; int edad; };  <- may ; sa dulo
// struct tao a;  gumagawa ng variable na galing sa uring tao
// a.edad ang tuldok ay nagbubukas ng field (a.inisyal, a.edad)
// array: magkakapareho ang type, numero ang gamit. struct: pwedeng magkakaiba, pangalan ang gamit

