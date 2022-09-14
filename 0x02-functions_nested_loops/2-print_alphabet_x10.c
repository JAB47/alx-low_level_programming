#include "main.h"

/**
 * print_alphabest_x10 -prints alphabest 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char alphabest = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
