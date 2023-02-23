#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number of times
 * Reaturn: (1)
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m;
		int o;

		m = 0;
		o = 0;
		while (m < n && o < n && o == m)
		{
			_putchar('\\');
			m++;
			o++;
		}
		while (o < m)
		{
			_putchar(' ');
		}
			_putchar('\n');
	}
}
