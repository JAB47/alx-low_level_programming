#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- beginning
 * Description- Selectively prints alphebets to screen
 * Return: always 0 if success
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (!(i == 113 || i == 101))
			putchar(i);
	}
	putchar('\n');
		return (0);
}
