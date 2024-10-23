#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return always 0 (Sucess)

int main() {
    srand(time(NULL)); // Initialiser le générateur de nombres aléatoires
    int n = rand() % (RAND_MAX + 1) - (RAND_MAX / 2); // Générer un nombre aléatoire entre -RAND_MAX/2 et RAND_MAX/2

    // Complétez le code ci-dessous
    printf("Le nombre est : %d\n", n);
    if (n > 0) {
        printf("est positif\n");
    } else if (n == 0) {
        printf("est zéro\n");
    } else {
        printf("est négatif\n");
    }

    return 0;
}
