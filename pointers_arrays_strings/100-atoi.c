#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - check the code
 * @s: pointer
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int res = 0;
	int sign = 1;

	while ((*s < '0' || *s > '9') && *s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (res > INT_MAX / 10 || (res ==  INT_MAX / 10 && *s - '0' > INT_MAX % 10))
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}

		res = 10 * res + (*s - '0');
		s++;
	}

	return (sign * res);
}
