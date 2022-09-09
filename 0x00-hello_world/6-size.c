#include<stdio.h>

/**
 *main-beginning
 *
 * Return: (0) if a success
 */
int main(void)
{
	int a  = sizeof(char);
	int b = sizeof(int);
	int c = sizeof(long int);
	int d = sizeof(long long int);
	int e = sizeof(float);

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s0\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
