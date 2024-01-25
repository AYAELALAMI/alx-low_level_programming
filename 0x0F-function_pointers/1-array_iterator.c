#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes the function on each given element of the array
 * @array: the array given
 * @size: size of that array
 * @action: name of function that will perform on the elemts of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int rep;

	if (array == NULL || action == NULL)
		return;
	for (rep = 0; rep < size; rep++)
		action(array[rep]);
}
