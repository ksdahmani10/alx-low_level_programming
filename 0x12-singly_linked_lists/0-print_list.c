#include <stdio.h>
#include "lists.h"
/**
  * print_listin
  * @h: singly linked list
  * Return: number of nodes in the list
  */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
