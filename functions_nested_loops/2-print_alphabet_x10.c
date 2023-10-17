#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - main description
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int a;

	for (a = 0 ; a < 10 ; a++)
	{
		for (i = 97 ; i <= 122 && i >= 97 ; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
