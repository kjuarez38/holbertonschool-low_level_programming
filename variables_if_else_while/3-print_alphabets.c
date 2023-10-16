#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - description
 * Return: Always 0
 */
int main(void)
{
	int i;


	for (i = 0 ; i <= 122 ; i++)
	{
		if (i >= 97 && i <= 122)
			putchar(i);
	}
	for (i = 0 ; i <= 122 ; i++)
	{
		if (i >= 65 && i <= 90)
			putchar(i);
	}
	putchar('\n');

	return (0);

}
