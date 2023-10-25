#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * *_strstr - check the code
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	for (; haystack[i] != '\0' ; i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
