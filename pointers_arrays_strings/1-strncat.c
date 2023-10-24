#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strncat - point
 * @dest : pointers
 * @src : pointer
 * @n : variable
 * Return: Always 1 (True) or 0 (False)
 */
char *_strncat(char *dest, char *src, int n)

{
	int len = 0;
	int len2 = 0;
	int i = 0;

	while (src[len] != '\0')
		len++;
	while (dest[len2] != '\0')
		len2++;

	for (; i <= len ; i++)
	{
		if (i != n)
			dest[len2 + i] = src[i];
	}

	return (dest);
}

