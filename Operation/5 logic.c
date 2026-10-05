#include <stdio.h>

int main(void)
{
    int a = 5;

    printf("%d\n", a > 3 && a < 10);
    printf("%d\n", a > 3 && a < 4);
    return 0;
    
}
// Sa lesson na ito ang && (AT): parehong tanong ay dapat TOTOO
// a > 3 && a < 10 ay 1 (parehong totoo)
// a > 3 && a < 4 ay 0 (may isang mali)
// 1 ay tama (totoo), 0 ay mali