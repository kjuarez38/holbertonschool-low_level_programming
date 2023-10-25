#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * *_strchr - check the code
 * @s: pointer
 * @c: variable
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (s + i);
		}

	}
	return ('\0');
}
