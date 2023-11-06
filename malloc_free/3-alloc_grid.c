#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - main description
 * @width: width of array
 * @height: height of array
 *
 * Return: 0.
 */
int **alloc_grid(int width, int height)

{

	int **arr;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (; i < height ; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (--i >= 0)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
