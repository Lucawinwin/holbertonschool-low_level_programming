#include <unistd.h>

/**
 * main - prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

/* Print lowercase alphabet */
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}

/* Print uppercase alphabet */
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}

putchar('\n'); /* Print a newline */

return (0); /* Return success */
}

