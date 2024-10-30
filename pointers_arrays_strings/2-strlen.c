#include <stdio.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str. If str is NULL, return 0.
 */
size_t _strlen(const char *str)
{
    if (str == NULL) {
        return 0; // Gérer le cas où le pointeur est nul
    }

    size_t length = 0;
    while (*str++) {
        length++;
    }

    return length; // Retourner la longueur calculée
}

int main() {
    const char *ma_chaine = "Bonjour, monde !";
    size_t longueur = _strlen(ma_chaine);

    printf("La longueur de la chaîne est : %zu\n", longueur); // Utiliser %zu pour size_t
    return 0;
}

