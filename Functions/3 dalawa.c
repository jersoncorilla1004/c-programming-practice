#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    printf("%d\n", add(3, 4));
    printf("%d\n", add(10, 5));
    return 0;

}
// Sa lesson na ito ang dalawang parameter: paghiwalayin ng kuwit
// int add(int a, int b): bawat parameter ay may sariling type
// add(10, 5): a ay 10 at b ay 5, ayon sa PAGKAKASUNOD
// ang return a + b; ay nagbabalik ng sagot sa tumawag