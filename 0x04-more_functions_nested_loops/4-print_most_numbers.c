#include "main.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * do not print 2 and 4
 * Return: always 0
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
