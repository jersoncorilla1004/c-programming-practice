#include <stdio.h>

int main(){
    int numbers[3] = {10, 20, 30};
    int *ptr = numbers;

    printf("1stVal: %d\n", *ptr);
    ptr++;
    printf("2ndVal: %d\n", *ptr);
    ptr++;
    printf("3rdVal: %d\n", *ptr);
    return 0;
}
// [PALIWANAG AT NOTES: 3 poin aritme.c]
// 1. Anong ginagawa nito?
//    - Ipinapakita nito ang "Pointer Arithmetic" o ang paggalaw sa memorya gamit ang math operators (++ o --).
//    - Kapag nag-`ptr++` ka sa isang integer pointer, hindi lang ito nadadagdagan ng 1 byte, 
//      kundi nadadagdagan ito base sa sukat ng data type (sa `int`, ito ay karaniwang 4 bytes) para lumipat sa sunod na variable o array element.
// 2. Saan ginagamit?
//    - Mahalaga ito sa pag-traverse ng mga arrays, pagbasa ng sunud-sunod na buffer ng data sa RAM, 
//      at pag-parse ng mga PE headers o shellcode payloads na nakalagay nang sunud-sunod sa memorya.