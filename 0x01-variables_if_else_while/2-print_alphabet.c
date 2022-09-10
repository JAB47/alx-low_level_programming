#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - beginning
 * Description -prints alphebet is lower cases
 * Return: exit status is zero means success
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
