#include "main.h"

/**
 * _puts - Print a string
 * @str: A Pointer that Point to a string
*/

void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str + 0);
	str++;
}
_putchar('\n');
}
