#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: the variable used to asign the value
 * Return: 1 if its greater, 0 prints zero and -1 is less than zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
