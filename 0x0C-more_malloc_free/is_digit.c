#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - checks if a string contains a non-digit
 * @s: char arg
 *
 * Return: 0 if non-digit, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
