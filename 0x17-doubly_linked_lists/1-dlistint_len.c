#include "lists.h"
/**
 * dlistint_len - Return number of elements in the linked lists
 * @h: Pointer to struct of the linked lists
 * Return: The amount of elements in the linked lists
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c_node = 0;

	while (h != NULL)
	{
		h = h->next;
		c_node++;
	}
	return (c_node);
}
