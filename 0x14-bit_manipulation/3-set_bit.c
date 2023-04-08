#include "main.h"
/**
 * set_bit - fuction that sets the value of a bit to 1 at given index
 * @n: long int 
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
	{
		return (-1);
	}
	x = 1 << index;
	*n = (*n | x);
	return (1);
}
