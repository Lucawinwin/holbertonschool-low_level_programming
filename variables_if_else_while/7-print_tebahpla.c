#include <stdio.h>
/**
 * main - imprime l'alphababet à l'envers
 *
 * Return: Toujours 0 (Sucess)
 */

int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
