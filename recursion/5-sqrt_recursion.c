#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * square - check the code
 * @m: variable
 * @r: variable
 *
 * Return: Always 0.
 */
int square(int m, int r)
{
	if (m * m == r)
		return (m);

	else if (r < m * m)
		return (-1);

	else
		return (square(m + 1, r));
}
/**
 * _sqrt_recursion - check the code
 * @n: variable
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (square(1, n));

}
