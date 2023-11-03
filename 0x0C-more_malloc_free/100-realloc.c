#include "main.h"

/**
 * _realloc - allocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size of the allocated space for ptr in bytes.
 * @new_size: New size of the memory block in bytes.
 *
 * Return: Pointer to the newly allocated memory block.
 *         NULL if malloc fails or if new_size is zero and ptr is not NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
			if (p == NULL)
				return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}


