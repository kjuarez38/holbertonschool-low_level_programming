#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 *
 * @b: pointer to string
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	while (*b != '\0')
	{
		if (*b == 0 || *b == 1)
		{
			res = (res << 1);
			b++;
		}
		return (0);
	}
	return (res);
}
