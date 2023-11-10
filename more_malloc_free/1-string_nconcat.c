#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - check the code
 *
 * @s1: pointer first word
 * @s2: pointer second word
 * @n: variable
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int len_s1 = 0;
	unsigned int len_displayed_s2 = 0;
	char *mal;
	unsigned int totalSize = 0;
	unsigned int index = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_displayed_s2] != '\0')
		len_displayed_s2++;

	if (n < len_displayed_s2)
		len_displayed_s2 = n;
	totalSize = len_s1 + len_displayed_s2;

	mal = malloc(totalSize + 1);

	if (mal == 0)
	{
		free(mal);
		return (NULL);
	}
	for (; index < totalSize; index++)
	{
		if (index < len_s1)
			mal[index] = s1[index];
		else if (index - len_s1 < n)
			mal[index] = s2[index - len_s1];
	}
	mal[index] = '\0';

	return (mal);
}
