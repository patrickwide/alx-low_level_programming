#include <stdio.h>

/**
 * _isupper - checks if a character is uppercase
 *
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')  /* check if c is between 'A' and 'Z' */
        return 1;             /* if so, return 1 (true) */
    else                      /* otherwise */
        return 0;             /* return 0 (false) */
}

/**
 * main - tests the _isupper function
 *
 * Return: Always 0
 */
int main(void)
{
    char c;

    c = 'A';                     /* set c to uppercase 'A' */
    printf("%c: %d\n", c, _isupper(c)); /* print the result of _isupper(c) */
    c = 'a';                     /* set c to lowercase 'a' */
    printf("%c: %d\n", c, _isupper(c)); /* print the result of _isupper(c) */
    return 0;                    /* exit the program */
}

