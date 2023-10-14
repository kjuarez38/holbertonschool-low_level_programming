#include <stdio.h>

/**
 * main - description pour main
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int llintType;
	float floatType;

	prinf("Size of a char: %zu byte(s)", sizeof(charType));
	printf("Size of an int: %zu byte(s)", sizeof(intType));
	printf("Size of a long int: %zu byte(s)", sizeof(longintType);
	printf("Size of a long long int: %zu byte(s)", sizeof(llintType));
	printf("Size of a float: %zu byte(s)", sizeof(floatType));

	return (0);
}
