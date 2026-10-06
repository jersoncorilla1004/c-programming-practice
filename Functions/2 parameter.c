#include <stdio.h>

int doble(int n) {
    return n * 2;

}

int main(void) {
    printf("%d\n", doble(4));
    printf("%d\n", doble(10));

    return 0;
}
// Sa lesson na ito ang parameter: lalagyan sa loob ng function na tumatanggap ng halaga
// int doble(int n): ang unang int ay ibinabalik, ang int n ay parameter
// doble(4): ang 4 ay argument, kaya n ay 4 sa loob ng function
// iisang function, iba't ibang sagot depende sa ipinasok
// kapag may parameter, hindi na (void) ang nasa loob ng ( )