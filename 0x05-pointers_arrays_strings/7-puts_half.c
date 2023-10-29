#include "main.h"

/**
 * puts_half - prints half of string
 * @str: pointer to char argument
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, length, n;

	for (i = 0; str[i] != '\0'; i++)
		length = i;


	n = (length - 1) / 2;
	if (length % 2 == 0)
	{
		for (i = (length / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (n + 1); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
