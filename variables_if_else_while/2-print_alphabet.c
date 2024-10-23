#include <unistd.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('abcdefghijklmnopqrstuvwxyz');

return (0);
}
