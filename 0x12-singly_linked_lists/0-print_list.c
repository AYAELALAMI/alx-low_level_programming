#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer of the linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t linked_elements;

	linked_elements = 0;
	while (h != NULL)
	{
	if (h->str == NULL)
	printf("[%d] %s\n", 0, "(nil)");
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	linked_elements++;
	}
	return (linked_elements);
}
