#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
