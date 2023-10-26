#include <stdio.h>
/**
 * _puts_recursion - prints string
 * @s: string to print
 * Hello_recursion
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
