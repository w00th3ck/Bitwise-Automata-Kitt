#include <stdio.h>
#ifdef _WIN32
#include <windows.h> // Pour Sleep() sous Windows
#else
#include <unistd.h>  // Pour usleep() sous Linux/Mac
#endif

void printBits(unsigned int v) {
    for (int i = 31; i >= 0; i--) {
        // On décale le bit i vers la position 0 et on masque avec 1
        printf("%d", (v >> i) & 1);

        // Optionnel : ajouter un espace tous les 8 bits pour la lisibilité
        //if (i % 8 == 0) printf(" ");
    }
    printf("\r"); // \r revient au début de la ligne sans sauter
}

int main() {
    unsigned int v = 1 << 31; // Initialisation de Kitt à gauche

    while(1) {
        // 1. Ta formule de collision
        v ^= ((v & 0x80000000) >> 31) | ((v & 0x00000002) >> 1);

        // 2. Ta formule de mouvement
        v = (1 & v) | ((v >> 1) << (2 & ((1 & v) - 1)));

        // 3. Affichage
        printBits(v);
        fflush(stdout); // Force l'affichage immédiat

        // 4. Temporisation (50ms)
        #ifdef _WIN32
        Sleep(50);
        #else
        usleep(50000);
        #endif
    }
    return 0;
}
