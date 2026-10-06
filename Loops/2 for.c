#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i = i++) {
        printf("i = %d\n", i);
        
    }
    return 0;
}



// Sa lesson na ito ang for: pinagsasama ang panimula, condition, at pagdagdag sa isang linya
// for (panimula; condition; pagdagdag)
// ang return 0; ay dapat nasa LABAS ng loop, kung hindi aalis agad ang program
// for: kapag alam kung ilang beses, while: kapag hindi alam kung ilang beses
// i++ ay dagdagan ng 1, i-- ay bawasan ng 1

// i + 1  normal resulta 5 na 1
// i = i++ infinite loop
// i++ bilang 1 to 5 mismo 
// i-- pabalik na bilang 

// Sa lesson na ito ang for: pinagsasama ang panimula, condition, at pagdagdag sa isang linya
// for (panimula; condition; pagdagdag)
// ang return 0; ay dapat nasa LABAS ng loop, kung hindi aalis agad ang program
// i++ ay dagdagan ng 1, i-- ay bawasan ng 1 (walang "i =" sa harap)
// i = i++ ay MALI: nananatili ang halaga kaya walang katapusan ang loop
// kapag walang tigil ang output: Ctrl+C

// Sa lesson na ito ang for: pinagsasama ang panimula, condition, at pagdagdag sa isang linya
// for (panimula; condition; pagdagdag)
// ang return 0; ay dapat nasa LABAS ng loop, kung hindi aalis agad ang program
// for: kapag alam kung ilang beses, while: kapag hindi alam kung ilang beses
// i++ ay dagdagan ng 1, i-- ay bawasan ng 1 (walang "i =" sa harap)
// i = i++ ay MALI: nananatili ang halaga kaya walang katapusan ang loop
// kapag walang tigil ang output: Ctrl+C