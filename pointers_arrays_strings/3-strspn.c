#include <stdio.h>
#include <string.h>

int main(void)
{
int len;
const char str1[] = "hello world";
const char str2[] = "oleh";

len = strspn(str1, str2);

printf("Length of initial segment matching %d\n", len);

return (0);
}
