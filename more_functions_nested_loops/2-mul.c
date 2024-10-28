#include <stdio.h>

/**
 * mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of a and b
 */
int mul(int a, int b)
{
return (a * b);
}


int main(void)
{
int num1 = 6;
int num2 = 7;

int result = mul(num1, num2);
printf("Le produit de %d et %d est %d.\n", num1, num2, result);

return (0);
}

