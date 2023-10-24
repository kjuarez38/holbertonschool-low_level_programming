#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strcat - point
 * @dest : pointers
 * @src : variable
 * Return: Always 1 (True) or 0 (False)
 */
char *_strcat(char *dest, char *src)

{
	int len = 0;
	int len2 = 0;
	int i = 0;

	while (src[len] != '\0')
		len++;
	while (dest[len2] != '\0')
		len2++;


	for (; i <= len ; i++)
		dest[len2 + i] = src[i];

	return (dest);
}

