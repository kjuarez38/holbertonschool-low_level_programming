#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - sum all the parameters
 * @separator: you know
 * @n: variable
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *tmp;

	va_list args;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		tmp = va_arg(args, char*);

		if (tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
