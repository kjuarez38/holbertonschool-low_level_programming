#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - check the code
 * @s: pointer
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len ; i >= 1 ; i--)
		printf("%c", *(s + i));
	putchar('\n');
}
