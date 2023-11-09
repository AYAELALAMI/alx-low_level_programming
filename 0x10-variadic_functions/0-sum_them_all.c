#include "variadic_functions.h"


/**
* sum_them_all - calculate the sum of all the paramters given
* @n: The number of paramters
* @...: paramters that will get calculated into a sum
*
* Return: the sum of all paramters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = n, sum = 0;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
