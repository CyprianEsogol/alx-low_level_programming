#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line.
 * @a: variable array name
 * @n: the number of elements of the array to be printed
 * Return: array number
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
	}
	if (x == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
