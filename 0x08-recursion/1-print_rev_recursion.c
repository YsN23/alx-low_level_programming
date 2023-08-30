#include "main.h"

/**
 *	_print_rev_recursion - Prints string in reverse using recursion
 * @s: Pointer to the string to be printed in reverse
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
