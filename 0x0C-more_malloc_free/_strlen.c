#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: char argument
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
