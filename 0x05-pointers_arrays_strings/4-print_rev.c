#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a char argument
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;

	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i;
	}
	for (j = len; j > 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
