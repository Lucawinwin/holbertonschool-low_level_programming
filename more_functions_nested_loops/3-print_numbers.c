#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c) {
return putchar(c); // Using putchar from stdio.h for simplicity
}

/**
 * print_numbers - prints the numbers from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
char numbers[10] = "0123456789"; // String containing numbers from 0 to 9
for (int i = 0; i < 10; i++)
{
_putchar(numbers[i]);
}
    
_putchar('\n');
}


int main(void)
{
print_numbers();
return 0;
}
i
