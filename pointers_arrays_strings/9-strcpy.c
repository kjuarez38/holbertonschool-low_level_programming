#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - point
 * @dest : pointers
 * @src : variable
 * Return: Always 1 (True) or 0 (False)
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = strlen(src);


	for (i = 0 ; i != len ; i++)
		dest[i] = src[i];

	return (dest);
}
