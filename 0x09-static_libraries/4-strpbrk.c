#include "main.h"

/**
 * _strpbrk - function
 * @s: char argument pointer
 * @accept: pointer to char arg
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
