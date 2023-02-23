#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times for the character to be printed
 * Return: (1)
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m;

		m = 1;
		while (m <= n)
		{
			_putchar('_');
			m++;
		}
		_putchar('\n');
	}
}
