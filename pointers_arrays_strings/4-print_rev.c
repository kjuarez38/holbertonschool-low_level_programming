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
	int len = strlen(s) - 1;

	for (i = len ; i >= 0 ; i--)
		printf("%c", s[i]);
	putchar('\n');
}
