#include "main.h"
/**
 * *_memcpy - copy memory area
 * @src: pointer
 * @dest: pointer destination
 * @n: unsigned int
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
