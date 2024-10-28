#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
// Check if c is between '0' and '9'
if (c >= '0' && c <= '9')
{
return 1; // c is a digit
}
return 0; // c is not a digit
}

// Example usage
int main(void)
{
char test_char;

// Test with different characters
test_char = '5';
printf("%c is %s.\n", test_char, _isdigit(test_char) ? "a digit" : "not a digit");

test_char = 'a';
printf("%c is %s.\n", test_char, _isdigit(test_char) ? "a digit" : "not a digit");

test_char = '0';
printf("%c is %s.\n", test_char, _isdigit(test_char) ? "a digit" : "not a digit");

test_char = '9';
printf("%c is %s.\n", test_char, _isdigit(test_char) ? "a digit" : "not a digit");

test_char = '@'; // Non-digit character
printf("%c is %s.\n", test_char, _isdigit(test_char) ? "a digit" : "not a digit");

return (0);
}

