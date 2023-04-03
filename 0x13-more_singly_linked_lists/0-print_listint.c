#include "lists.h"
/**
 * print_listint - function that prints all the elements of listint_t list
 * @h: nodes
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x;

	x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
