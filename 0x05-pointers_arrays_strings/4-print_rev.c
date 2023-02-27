#include "main.h"
/**
 * print_rev - function that prints a string in reverse followed by a newline
 * @s: variable that prints the string
 * Return: (0)
 */

void print_rev(char *s)
{
	int x = 0;
	int y;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	s--;
	for (y = x; y > 0; y--)
	{
		_putchar (*s);
		s--;
	}
	_putchar ('\n');
}
