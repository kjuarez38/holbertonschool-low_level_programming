#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - main description
 * @r: variable
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	r = r % 10;

	if (r < 0)
		r = r * -1;

	_putchar('0' + r);
	return (r);

}
