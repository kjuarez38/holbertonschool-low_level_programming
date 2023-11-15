#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - main description
 *
 * @argc: number variable
 * @argv: argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if (strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}


	result = (*get_op_func(argv[2]))(x, y);

	printf("%d\n", result);

	return (0);
}
