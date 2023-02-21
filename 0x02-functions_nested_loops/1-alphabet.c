#include "main.h"

/**
 * print_alphabet - print_alphabet all in lowercases
 *
 * Return:
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
