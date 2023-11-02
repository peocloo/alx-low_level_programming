#include "main.h"

/**
 * _atoi - string to integer
 * @s: string argument
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int new = 0;
	int i = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && s[i] >= '0' && s[i] != '\0')
	{
		new = (new * 10) + (s[i] - '0');
		i++;
	}
	new *= sign;
	return (new);
}
