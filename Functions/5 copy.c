#include <stdio.h>

void dagdag(int n) {
    n = n + 10;
    printf("sa loob: %d\n", n);
}

int main(void) {
    int y = 5;
    dagdag(y);
    printf("sa labas: %d\n", y);
    return 0;

}
// Sa lesson na ito ang kopya (pass by value): kopya lang ng halaga ang pumapasok sa parameter
// dagdag(y): ang halaga ng y (5) ay kinopya papunta sa n
// ang pagbabago sa n ay hindi nakakaapekto sa y
// sa loob: 15, sa labas: 5
// kailangan ng pointers kung gusto mong baguhin ang mismong variable ng tumawag