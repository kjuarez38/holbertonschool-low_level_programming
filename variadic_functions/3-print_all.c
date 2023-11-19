#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_f - check the code
 * @p: va_list
 * Return: Always 0.
 */
void print_f(va_list p)
{
	printf("%f", va_arg(p, double));
}

/**
 * print_c - check the code
 * @p: va_list
 * Return: Always 0.
 */
void print_c(va_list p)
{
	printf("%c", va_arg(p, int));
}

/**
 * print_s - check the code
 * @p: va_list
 * Return: Always 0.
 */
void print_s(va_list p)
{
	char *result = va_arg(p, char*);

	if (!result)
	{
		printf("(nil)");
		return;
	}
	printf("%s", result);
}

/**
 * print_i - check the code
 * @p: va_list
 * Return: Always 0.
 */
void print_i(va_list p)
{
	printf("%i", va_arg(p, int));
}


/**
 * print_all - sum all the parameters
 * @format: you know
 *
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int f = 0;
	int l = 0;
	char *req_comma = "";

	form list[] = {
		{"i", print_i},
		{"f", print_f},
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	va_start(ptr, format);

	while (format && format[f])
	{
		l = 0;

		printf("%s", req_comma);
		req_comma = "";

		while (list[l].t)
		{
			if (*list[l].t == format[f])
			{
				list[l].f(ptr);
				req_comma = ", ";
			}
			l++;
		}
		f++;
	}
	printf("\n");

	va_end(ptr);
}
