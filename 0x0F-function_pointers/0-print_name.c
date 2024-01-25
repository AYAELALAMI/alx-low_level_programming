#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - this function pointer prints a name
 * @name: is the  name that is going to be printed
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
