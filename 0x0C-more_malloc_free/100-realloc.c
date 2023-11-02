#include <stdlib.h>
/*
 * *_realloc - rallocates a memory block using malloc and free.
 * @ptr: pointer to memory previously allocated with maloc(old_size).
 * @old_size: size in bytes of allocated space for ptr.
 * @new_size: size in bytes of the new memory block.
 *
 * Return:  NULL if new_size = 0 and ptr is not NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	unsigned char *src = (unsigned char *)ptr;
	unsigned char *dest = (unsigned char *)new_ptr;

	for (unsigned int i = 0; i < old_size && i < new_size; i++)
	{
	    dest[i] = src[i];
	}
	free(ptr);

	return (new_ptr);
}

