#include "main.h"

/**
 * print_alphabest_x10 -prints alphabest 10 times
 *
 * Return:void
 */

void print_alphabest_x10(void)

{

	char c;

	int i = 0;



	while (i < 10)

	{
		c = 'a';

		while (c <= 'z')
		
		{
			_putchar(c);

			c++;

		}

		_putvhar('\n');

		i++;

	}

}
