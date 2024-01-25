#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer,  returns the index of first occurence
 * @array: array that i will search from
 * @size: size of the array
 * @cmp: function pointers
 * return: If no element matches, return -1, If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]) == 1)
			return (count);
	}
	return	(-1);
}
