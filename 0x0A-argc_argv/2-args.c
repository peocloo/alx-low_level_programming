#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print number of arguments passed into program
 * @argc: integer argument
 * @argv: pointer to char argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
