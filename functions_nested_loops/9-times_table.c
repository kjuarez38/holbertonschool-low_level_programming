#include <stdio.h>
#include "main.h"
/**
 * times_table - main description
 * Return: Always 0.
 */
void times_table(void)
{
	int a;
	int b;
	int res;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			res = a * b;
			if (b > 0)
			{
				if (res < 10)
					printf(" ");
				printf(" ");
			}
			printf("%i", res);

			if (b < 9)
				printf(",");
		}
		printf("\n");
	}
}
