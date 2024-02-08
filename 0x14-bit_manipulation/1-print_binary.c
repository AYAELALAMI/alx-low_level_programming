#include "main.h"

/**
 * print_binary - print binary equivalent of the decimal number
 * @n: the number printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int num = sizeof(n) * 8, x = 0;

	while (num)
	{
		if (n & 1L << --num)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	if (!x)
		_putchar('0');
}
