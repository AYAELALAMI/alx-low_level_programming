#include "main.h"

/**
 * get_bit - return value of a bit
 * @n: number to be searched
 * @index: index of the bit
 * Return:  bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
