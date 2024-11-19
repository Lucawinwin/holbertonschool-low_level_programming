#include"function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int));
{
int recherche(int array[20], int taille, int valeur_recherchee); 
{
    for (int i = 0; i < taille; i++) {
        if (array[20] == valeur_recherchee) {
            return i;
       }
    }
    return -1;
}
int main() {
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int valeur_recherchee = 98;

    int index = recherche(array, 20, valeur_recherchee);
    if (index != -1) {
        printf("L'entier %d se trouve à l'indice %d.\n", valeur_recherchee, index);
    } else {
        printf("L'entier %d n'a pas été trouvé dans le tableau.\n", valeur_recherchee);
    }

    return 0;
}
