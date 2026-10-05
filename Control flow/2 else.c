#include <stdio.h>

int main(void) {
    int edad = 15;

    printf("edad %d\n", edad);
    if (edad >= 18) {
        printf("Matanda kana\n");
    }
    else {
        printf("Bata ka pa\n");

    }
    return 0;
    
}

// Sa lesson na ito ang else: ang daan kapag MALI ang tanong ng if
// kapag edad = 15, mali ang edad >= 18, kaya tumakbo ang else ("Bata ka pa")
// kapag edad = 20, totoo ang edad >= 18, kaya tumakbo ang if ("Matanda ka na")
// isa lang sa dalawa ang tatakbo, hindi pareho