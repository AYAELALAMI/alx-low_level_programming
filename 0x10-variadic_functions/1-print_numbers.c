#include "variadic_functions.h"


/**
 * print_numbers - prints numbers with a new line after it
 * @separator: the string between the numbers of paramters
 * @n: The number of paramters
 * @...: paramters that will get printed
 *
 * Return: the sum of all paramters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;


	va_start(nums, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nums);
}


