#include "main.h"
#include <stdio.h>

void print_numbers(void)
{
char num;

for (num = '0'; num <= '9'; num++)
{
putchar (num);
}
putchar ('\n');
}
