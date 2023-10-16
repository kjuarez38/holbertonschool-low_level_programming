#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - description
 * Return: Always 0
 */
int main(void)
{
	int a = 97;
	int z = 122;
	int i;

	for (i = 122 ; i <= z && i >= a ; i--)
		putchar(i);
	putchar('\n');


	return (0);

}
