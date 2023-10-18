#include "main.h"
#include <stdio.h>

/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
	int i = 1;

	for (; i <= 100 ; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%i", i);
		}
		putchar(' ');
	}
	printf("\n");
	return (0);
}
