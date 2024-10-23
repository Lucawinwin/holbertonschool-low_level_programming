#include <stdio.h>
/**
 * main - imprime l'alphabet en minuscules 
 *
 * Return: Toujours 0 (Sucess)
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}

