#include "main.h"
/**
 * set_bit - set a bit at given index to 1
 * @index: index of the bit to be set as 1
 * @n: pointer that poits to the number to be changed
 * Return: 1 if success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
