#include "function_pointers.h"
/**
 * int_index - returns the index of the first element
 * @array: array
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	x = 0;
	while (x < size)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
		x++;
	}
	return (-1);
}
