#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point a program that will assign a random number to the varia
 *ble n each time it is executed
 *Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{	
	int n;

	srand(time(0));
	n = i;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
/*	return (0);*/
}
/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}
