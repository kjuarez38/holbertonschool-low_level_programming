#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - main description
 * @str: the size of the memory to print
 *
 * Return: 0.
 */
char *_strdup(char *str)
{
	char *new_str = (char) malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
