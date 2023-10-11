#include "main.h"
/**
 * _islower()- checks for lower character.
 * Return: integer 0 or 1.
 * @c = argument for function.
 */

int _islower(int c)
{
	/*check if ch is lower or uppercase*/
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
