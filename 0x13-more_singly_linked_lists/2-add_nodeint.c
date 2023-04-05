#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the
 * beginning of a listint_t list
 * @head: pointer
 * @n: node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
	{
		return (NULL);
	}
	x->n = n;
	x->next = *head;
	*head = x;
	return (x);
}
