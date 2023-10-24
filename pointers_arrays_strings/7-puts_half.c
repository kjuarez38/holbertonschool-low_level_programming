#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - check the code
 * @str: pointer
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = len / 2   ; i <= len - 1  ; i ++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
