#include "main.h"

/**
 * print_alphabest_x10 -prints alphabest 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = b; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
