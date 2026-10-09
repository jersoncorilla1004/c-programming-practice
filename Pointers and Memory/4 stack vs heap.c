#include <stdio.h>
#include <stdlib.h>

int main() {
    // stackVar = 5: Awtomatikong nakalagay sa Stack memory
    int stackVar = 5;
    printf("Stack: %d\n", stackVar);

    // heapPtr = malloc: Manu-manong humihingi ng espasyo sa RAM (Heap)
    int *heapPtr = (int*) malloc(sizeof(int));
    if (heapPtr == NULL) return 1;

    // Nilalagyan ng value ang Heap memory address
    *heapPtr = 1005;
    printf("Heap: %d\n", *heapPtr);

    // free: Para maiwasan ang Memory Leak
    free(heapPtr);

    return 0;
}

// [PALIWANAG AT NOTES: 4 stack vs heap.c]
// ito: Stack allocation (int stackVar = 5) - awtomatiko at mabilis na memory kung saan nakasalalay ang mga lokal na variable.
// ito: Heap allocation (malloc) - manu-manong humihingi ng espasyo direkta sa RAM na kailangang i-free pagkatapos gamitin.
// para: Sa low-level engineering at malware dev, ang Heap ang ginagamit na imbakan ng malalaking dynamic buffers at shellcode payloads.