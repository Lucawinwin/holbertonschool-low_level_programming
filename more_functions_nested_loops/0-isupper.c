#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: the character to check
 * 
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    // Check if c is between 'A' and 'Z'
    if (c >= 'A' && c <= 'Z')
    {
        return 1; // c is uppercase
    }
    return 0; // c is not uppercase
}

// Example usage
int main(void)
{
    char test_char = 'A';
    
    if (_isupper(test_char))
    {
        printf("%c is uppercase.\n", test_char);
    }
    else
    {
        printf("%c is not uppercase.\n", test_char);
    }

    return 0;
}

