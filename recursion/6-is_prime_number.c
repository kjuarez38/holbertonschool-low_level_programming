#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * prime - check the code
 * @n: variable
 * @i: variable
 *
 * Return: Always 0.
 */
int prime(int n, int i)
{

	if (n <= 1)
		return (0);

	if (i == n)
		return (1);


	if (n % i == 0)
		return (0);

	return (prime(n, i + 1));

}
/**
 * is_prime_number - check the code
 * @n: variable
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
