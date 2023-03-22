#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the results
 * @x: arguments
 * @y: array
 * Return: 0
 */
int main(int x, char *y[])
{
	int a;
	int b;
	char *c;

	if (x != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(y[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	c = (char *)main;
	for (b = 0; b < a; b++)
	{
		if (b == a - 1)
		{
			printf("%02hhx\n", c[b]);
			break;
		}
		printf("%02hhx", c[b]);
	}
	return (0);
}
