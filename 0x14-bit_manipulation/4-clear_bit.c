#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: index of the bit to be cleared
 * @n: pointer to the number to be chan
 * Return: 1 if successful, -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
