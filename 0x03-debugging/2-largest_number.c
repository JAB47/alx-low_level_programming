#include "main.h"

/**
 * largest_number -Prints 3 largest numbers
 * @a: first integer
 * @b: second integer
 * @c: third interger
 *
 * Return: Returns largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
		largest = a;
	else if (b > a && b > c)
		largest = b;
	else if (c > a && c > b)
		largest = c;
	return (largest);
}
