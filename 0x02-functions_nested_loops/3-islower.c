#include "main.h"
/**
 * _islower()- checks for lower character.
 * Return: integer 0 or 1.
 */

int _islower(int c)
{
	/*check if ch is lower or uppercase*/
	if (c <= 'Z' || c >= 'A')
		return (1);
	else
		return (0);
}
