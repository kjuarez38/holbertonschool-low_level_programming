#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - description
 * Return: Always 0
 */
int main(void)
{
	int n = 10;
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%i", i);
	}
	for (i = 97 ; i < 103 ; i++)
	{
		putchar(i);
	}
	putchar('\n');


	return (0);

}
