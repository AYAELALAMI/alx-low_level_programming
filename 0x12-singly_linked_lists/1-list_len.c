#include "lists.h"

/**
 * list_len - find the length of the list
 * @h: head node
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t ele_ments = 0;

	while (h != NULL)
	{
		h = h->next;
		ele_ments++;
	}
	return (ele_ments);
}
