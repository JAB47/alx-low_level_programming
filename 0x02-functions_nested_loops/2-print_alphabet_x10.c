#include "main.h"

/**
 * print_alphabest_x10 -prints alphabest 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_puchar(c);
		}

		_putchar ('\n');

		i++;
	}
}
