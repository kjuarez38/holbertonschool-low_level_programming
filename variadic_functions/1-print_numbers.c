#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - sum all the parameters
 * @separator: you know
 * @n: variable
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(args);

	if (separator == NULL)
		return;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
}
