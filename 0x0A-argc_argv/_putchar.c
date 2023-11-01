#include <stdio.h>

/**
 * _putchar - prints character to stdout
 * @c: char argument
 *
 * Return: integer
 * on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
