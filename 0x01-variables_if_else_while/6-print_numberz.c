#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-beginning
 * Description- prints all single digit numbers
 * Return: always 0 if success
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
