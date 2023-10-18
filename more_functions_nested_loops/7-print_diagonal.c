#include "main.h"
#include <stdio.h>

/**
* print_diagonal - check the code.
* @n: variable
*
* Return: Always 0.
*/
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			putchar(' ');
		}
		putchar(92);
		putchar('\n');
	}
	if (n <= 0)
	{
		putchar('\n');
	}
}
