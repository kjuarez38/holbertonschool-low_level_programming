#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - main description
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97 ; i <= 122 && i >= 97 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
