#include <stdio.h>

int main() {
    int genesisCode = 1004; // Isang normal na variable na may value na 1004

    // Paggamit ng Apersand or Address-of operator (&) 
    //para makita kung saang memory address nakatira ang variable
    printf("Value ng genesisCode: %d\n", genesisCode);
    printf("Mem Address ng genesisCode: %p\n", (void*)&genesisCode);
    
    return 0;


}
// [PALIWANAG AT NOTES: 1 &.c]
// 1. Anong ginagawa nito?
//    - Ang code na ito ay kumukuha ng isang normal na integer variable (genesisCode) 
//      at ipinapakita ang dalawang bagay sa screen: ang mismong value nito (1004) 
//      at ang pisikal na kinaroroonan nito sa RAM (ang memory address).
// 2. Saan ginagamit ang & (Address-of Operator)?
//    - Ginagamit ito sa low-level engineering para malaman ang eksaktong lokasyon 
//      ng data sa memorya (halimbawa: 0x7fff...).
//    - Sa iyong mga susunod na mission (tulad ng paggawa ng PE parser at malware analysis), 
//      napakahalagang malaman kung nasaan nakaposisyon sa RAM ang isang variable o function 
//      para ma-access o mamaneho ito gamit ang pointers.