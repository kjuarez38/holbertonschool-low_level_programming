#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code
 * @s: pointer
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);

}
