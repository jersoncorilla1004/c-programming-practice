#include <stdio.h>

int main(){
    int x = 5;
    int *ptr = &x;

    printf("x value: %d\n", x);
    printf("address na hawan ni ptr: %p\n", (void*)ptr);
    printf("Value na nakuha gamit ang Dereference (*ptr): %d\n", *ptr);

    return 0;

}
// [PALIWANAG AT NOTES: 2 pointers.c Output Analysis]
// 1. x value: 5
//    - Ito ang normal na pagbasa sa value ng variable na `x` na nakalagay sa Stack.
// 2. address na hawan ni ptr: 0x7ffddfb64244 (o katulad na hex address)
//    - Ito ang hexadecimal memory address kung saan nakatira si `x` sa RAM. 
//    - Dito nakaturo ang pointer variable (`ptr`) gamit ang address-of operator (&).
// 3. Value na nakuha gamit ang Dereference (*ptr): 5
//    - Gamit ang asterisk (*ptr), "pumasok" ang programa sa loob ng memory address 
//      na iyon at kinuha ang value na nakatago roon nang hindi na direktang tinatawag ang `x`.
// 
// Bakit ito mahalaga? 
// Sa malware development at reverse engineering, kadalasang ang mga nakikita mo 
// ay mga raw memory addresses lamang. Ang ganitong logic ang gagamitin mo para 
// magbasa, mag-inject, o magbago ng data sa memorya ng isang running process.