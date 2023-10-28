#include "main.h"

/**
 * _puts - prints a string and newline
 * @str: pointer to a string argument
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
