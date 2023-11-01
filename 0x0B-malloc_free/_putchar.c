#include <stdio.h>

/**
 * _putchar - writes character to stdout
 * @c: character to print
 *
 * Return: 1 on success
 * on error -1, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
