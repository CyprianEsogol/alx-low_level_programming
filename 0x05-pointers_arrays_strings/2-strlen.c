#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: variable that returns a string
 * Return: (length)
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
