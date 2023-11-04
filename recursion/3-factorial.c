#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * factorial - check the code
 * @n: variable
 *
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
