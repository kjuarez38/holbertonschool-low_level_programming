#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - main description
 * @n: variable
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	printf("%i\n", n);

}
