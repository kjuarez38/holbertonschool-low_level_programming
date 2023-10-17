#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - main description
 * @r: variable
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h != 24)
	{
		if (m == 60)
		{
			h++;
			m = 0;
		}
		if (h == 24)
			break;

		if (h <= 9)
			printf("0");
		printf("%i:", h);

		if (m <= 9)
			printf("0");
		printf("%i\n", m);
		m++;

	}
}
