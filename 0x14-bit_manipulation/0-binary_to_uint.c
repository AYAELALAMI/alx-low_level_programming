#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - convert  binary number to an unsigned int
 * @b: string of binary numbers
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int keep = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		keep = (keep * 2 + (*b++ - '0'));
	}
				return (keep);
}
