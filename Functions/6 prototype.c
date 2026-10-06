#include <stdio.h>

int doble(int n);

int main(void) {
    printf("%d\n", doble(4));
    return 0;
}

int doble(int n) {
    return n * 2;
}

// Sa lesson na ito ang prototype: ipinapakilala ang function sa compiler bago ito tawagin
// int doble(int n);  <- may ; at walang { }
// binabasa ng compiler mula itaas pababa, kaya kailangang kilala na ang function
// walang prototype at nasa ibaba ang function = implicit declaration error