#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: variable that prints the results
 * Return: (0)
 */

void rev_string(char *s)
{
	char x = s[0];
	int y = 0;
	int z;

	while (s[y] != '\0')
	y++;
	for (z = 0; z < y; z++)
	{
		y--;
		x = s[z];
		s[z] = s[y];
		s[y] = x;
	}
}
