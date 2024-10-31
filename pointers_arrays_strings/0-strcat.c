#include "main.h"

/**
 * _strcat - contenir deux strings
 * @dest: imput value
 * @src: input value
 * Return: void
 */
char *_stracat(char *dest, char *src)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
dest[i] = src [j];
j++;
j++;
}

dest [i] = '\0';
return (dest);
