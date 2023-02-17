
#include <stdio.h>

/**
 *main - print 00 to 99 with no duplicate digits or combos: no 11, no 10 (01)
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int m;

	for (m = '0'; m <= '9'; m++) /*increment tens*/
	{
		for (n = (m + 1); n <= '9'; n++) /*one's ten+1*/
		{
			putchar(m);
			putchar(n);

			if (m != '8' || n != '9') /*print commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
