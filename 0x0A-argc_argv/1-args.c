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
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
