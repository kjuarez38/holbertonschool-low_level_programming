#include "main.h"
#include <stdio.h>
#include <string.h>

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
	char s2 = strlen(s);

	for (i = 0 ; i < s2 ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
