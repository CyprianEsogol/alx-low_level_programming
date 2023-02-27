#include "main.h"
/**
 *swap_int - function that swaps the value of two integers
 *@a: integer to swap
 *@b: integer to swap
 *Return: (0)
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
