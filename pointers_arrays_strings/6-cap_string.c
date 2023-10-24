#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * *cap_string - main description
 * @str : pointers
 * Return: Always 1 (True) or 0 (False)
 */
char *cap_string(char *str)
{
	char *tab = " \n\t,;.!?\"\'(){}";
	int i = 0;
	long unsigned int j = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j <= strlen(tab) ; j++)
		{
			if (str[i - 1] == tab[j])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}

	return (str);
}
