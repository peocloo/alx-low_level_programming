#include "main.h"

int _putchar(char c);
/**
 * rev_string - prints a string in reverse
 * @s: pointer to a char argument
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len = 0;
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
