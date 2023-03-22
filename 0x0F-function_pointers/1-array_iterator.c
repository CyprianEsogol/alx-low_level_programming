#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: array
 * @size: size to print
 * @action: pointer
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	{
		return;
	}
	x = 0;
	while (x < size)
	{
		action(array[x]);
		x++;
	}
}
