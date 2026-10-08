#include <stdio.h>

int main(void){
    int numero[3] = {10, 20, 30};

    printf("%d\n", numero[0]);
    printf("%d\n", numero[1]);
    printf("%d\n", numero[2]);

    return 0;

}
// Sa lesson na ito ang array: hanay ng maraming halaga na magkakapareho ang type
// int numero[3] = {10, 20, 30}; ay may 3 drawer
// nagsisimula ang index sa 0: numero[0] ay 10, numero[1] ay 20, numero[2] ay 30
// ang huling index ay laging laki minus 1