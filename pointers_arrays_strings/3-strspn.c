#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * *_strspn - check the code
 * @s: pointer
 * @accept: pointer
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)

{
	unsigned int i;
	unsigned int len = 0;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;

			}
		}
		if (accept[j] == '\0')
		{
			return (len);
		}
	}
	return (len);
}

