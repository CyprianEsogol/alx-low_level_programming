#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 * @r: variable that returns the value of the last digit
 * Return: 0 the value of the last digit
 *
 */
int print_last_digit(int r)
{
	int r;

	if (n < 0)
		n = -n;
	a = n % 10;
	if (r < 0)
		r = -a;
	_putchar(r + '0');
	return (r);
}
