#include "main.h"

/**
 * *malloc_checked - allocates memeory using malloc and exit if failed
 * @b: int
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *h = malloc(b);

	if (h == 0)
		exit(98);

	return (h);
}
