#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - main description
 * @s1: string number one
 * @s2: string number two
 *
 * Return: 0.
 */
char *str_concat(char *s1, char *s2)
{
	int str1, str2, i = 0;
	char *a;

	if (s1 == NULL)
                return (NULL);
        if (s2 == NULL)
                return (NULL);

	str1 = strlen(s1);
	str2 = strlen(s2);

	a = malloc(str1 + str2 + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < str1; i++)
		a[i] = s1[i];

	for (i = 0; i < str2; i++)
		a[i + str1] = s2[i];

	return (a);
}
