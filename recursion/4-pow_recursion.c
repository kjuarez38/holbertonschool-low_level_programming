#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _pow_recursion - check the code
 * @x: variable
 * @y: variable
 *
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
