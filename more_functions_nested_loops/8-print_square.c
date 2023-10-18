#include "main.h"
#include <stdio.h>

/**
* print_square - check the code.
* @size: variable
*
* Return: Always 0.
*/
void print_square(int size)
{
	int i;
	int j;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	if (size <= 0)
	{
		putchar('\n');
	}
}
