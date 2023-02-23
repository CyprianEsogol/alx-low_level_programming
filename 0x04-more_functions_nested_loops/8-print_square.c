#include "main.h"
/**
 * print_square - function that prints a square
 * @size: variable representing the size of the square
 * Return (1)
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;
		int b;

		a = 0;
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		while (a < size)
		{
			_putchar('\n');
			a++;
		}
	}
}
