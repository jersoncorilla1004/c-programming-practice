#include <stdio.h>
#include <stdlib.h>

int main() {
    // Buksan ang file sa binary read mode ("rb")
    FILE *file = fopen("if.exe", "rb");

    if (file == NULL) {
        printf("Hindi mabuksan ang file!\n");
        return 1;
    }

    // Basahin ang unang ilang bytes (DOS Header magic bytes: 'MZ')
    unsigned char header[2];
    fread(header, sizeof(unsigned char), 2, file);

    printf("Magic Bytes: %02X %02X\n", header[0], header[1]);

    // Isara ang file pagkatapos gamitin
    fclose(file);

    return 0;
}

// [PALIWANAG AT NOTES: 1 read_file.c]
// ito: fopen("rb") - pagbubukas ng file sa binary mode para basahin ang raw bytes nito nang walang bawas.
// ito: fread() - pagkuha ng tiyak na dami ng data mula sa file patungo sa memory buffer.
// para: Sa PE parsing, kailangan nating basahin ang 'MZ' header at iba pang headers ng isang PE file para malaman ang istruktura ng isang executable.