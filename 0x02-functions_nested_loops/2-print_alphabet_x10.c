#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase followed by a
 * line
 */

void print_alphabet_x10(void)
{
	int x;
	int y;

	y = 0;
	while (y < 10)
	{
		x = 'a';
			while (x <= 'z')
			{
				_putchar(x);
				x++;
			}
		_putchar('\n');
		y++;
	}
}
