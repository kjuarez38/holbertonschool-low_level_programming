#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - point
 * @dest : pointers
 * @src : pointer
 * @n : variable
 * Return: Always 1 (True) or 0 (False)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n ; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

