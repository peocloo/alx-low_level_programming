#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: int
 */
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}
