#include <stdio.h>

int main(void)
{
    char lagda[] = "MZ";

    printf("%s\n", lagda);
    printf("%c\n", lagda[0]);
    printf("%d\n", lagda[0]);
    printf("%zu\n", sizeof(lagda));

    return 0;
}
