#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{
	int w;
	int x;
	int y;
	int z;

	for (w = '0'; w <= '9'; w++) /*print first two digit combo*/
	{
		for (x = '0'; x <= '9'; x++)
		{
		 	for (y = w; y <= '9'; y++) /*print second of pair*/
			{
				for (z = x + 1; z <= '9'; z++)
				{
					putchar(w);
					putchar(x);
					putchar(' ');
					putchar(y);
					putchar(z);

					if (!((w == '9' && x == '8') &&
					      (y == '9' && z == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				z = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
