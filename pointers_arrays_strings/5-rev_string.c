#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - check the code
 * @s: pointer
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(s) - 1;
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
