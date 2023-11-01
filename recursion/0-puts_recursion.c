#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - check the code
 * @s: pointef
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
