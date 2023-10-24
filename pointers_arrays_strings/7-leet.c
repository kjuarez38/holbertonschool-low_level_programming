#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * *leet - main description
 * @str : pointers
 * Return: Always 1 (True) or 0 (False)
 */
char *leet(char *str)
{
	int i;
	int j;
	int arr[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int arr2[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 10; j++)
		{
			if (str[i] == arr[j])
				str[i] = arr2[j];
		}
	}
	return (str);
}
