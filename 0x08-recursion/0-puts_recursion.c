#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: Pointer To String
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}


	_putchar(*s);
	_puts_recursion(s + 1);
}
