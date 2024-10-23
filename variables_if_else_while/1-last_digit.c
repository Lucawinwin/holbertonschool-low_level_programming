#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Votre code commence ici */
    if (n > 0)
    {
        printf("%d est positif\n", 5);
    }
    else if (n == 0)
    {
        printf("%d est zéro\n", 0);
    }
    else
    {
        printf("%d est négatif\n", 6);
    }
    /* Votre code se termine ici */

    return (0);
}
