#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: always 0
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
