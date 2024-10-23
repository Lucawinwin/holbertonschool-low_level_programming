#include <unistd.h>
#include <stdio.h>
/**
 * main - imprime l'alphabet en minuscules et en majuscules
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);

putchar('\n');
return (0);
}
