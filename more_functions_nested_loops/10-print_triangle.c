#include "main.h"
#include <stdio.h>

/**
 * print_triangle - check the code.
 * @size: variable
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (j < size - i - 1)
			{
				putchar(' ');
			}
			else
			{
				putchar('#');
			}
		}
		putchar('\n');
	}
	if (size <= 0)
	{
		putchar('\n');
	}
}
