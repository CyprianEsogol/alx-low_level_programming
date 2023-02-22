#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - Entry point a program that will assign a random
 * number to the variable n each time it is executed
 * @i: main
 * Return: Always 0 (Success)
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
