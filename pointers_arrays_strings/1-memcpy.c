#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - check the code
 * @dest: pointer
 * @src: pointer
 * @n: variable
 *
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
