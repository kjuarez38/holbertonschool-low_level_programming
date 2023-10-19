#include <stdio.h>
#include "main.h"

/**
 * main - description
 *
 * Return: Always 0
 */
int main(void)
{
	long int n = 612852475143;
	int large;
	int i;

	if (n % 2 == 0)
	{
		large = 2;
		return (large);
	}
	for (i = 3 ; i < n ; i = i + 2)
	{
		while (n % i == 0)
		{
			n = n % i;
			large = i;
		}
	}
	return (0);

}
