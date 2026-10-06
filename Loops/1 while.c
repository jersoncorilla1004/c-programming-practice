#include <stdio.h>

int main(void) {

    int i = 1;

    while (i <= 5) {
        printf("i = %d\n", i);
        i = i + 1; 
    }
    return 0;
}
// Sa lesson na ito ang while: habang TOTOO ang condition, inuulit ang nasa loob ng { }
// sinusuri ang condition BAGO ang bawat ikot
// i = i + 1 ay nagdadagdag ng 1 para balang araw ay maging mali ang condition
// kapag nakalimutan ang i = i + 1, walang katapusan ang loop (Ctrl+C para patigilin)
// i <= 5 ay 5 beses (1 hanggang 5), i < 5 ay 4 na beses (1 hanggang 4)