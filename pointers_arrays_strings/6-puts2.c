#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - check the code
 * @str: pointer
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0 ; i < len ; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
