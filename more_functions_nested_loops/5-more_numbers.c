#include "main.h"
#include <stdio.h>

/**
* more_numbers - check the code.
*
* Return: Always 0.
*/
void more_numbers(void)
{
	int n;
	int i = 0;

	for (; i < 10 ; i++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n >= 10)
			{
				putchar(n / 10 + '0');
			}
			putchar(n % 10 + '0');
		}
		putchar('\n');

	}
}
