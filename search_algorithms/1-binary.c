#include "search_algos.h"

/**
 * binary_search - Searche a value in a sorted arr use the binary search algo.
 *
 * @array: Pointer to the first element of the array.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: searched value in the array, or -1 if the value is not present.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	if (array)
	{
		while (right >= left)
		{
			printf("Searching in array: ");
			for (i = left; i <= right; i++)
			{
				printf("%d", array[i]);
				if (i < right)
					printf(", ");
			}
			printf("\n");

			mid = (left + right) / 2;

			if (array[mid] == value)
				return (mid);
			else if (array[mid] < value)
				left = mid + 1;
			else
				right = mid - 1;
		}
	}
	return (-1);
}
