#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    printf("%d\n", add(3, 4));
    printf("%d\n", add(10, 5));
    return 0;
    
}