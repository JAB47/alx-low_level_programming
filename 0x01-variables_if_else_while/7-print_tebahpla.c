#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -beginning
 * Description -prints the lowercase alphabet in reverse
 * Return: Always 0 if success
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}
