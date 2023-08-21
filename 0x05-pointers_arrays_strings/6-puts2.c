#include "main.h"

/**
 * puts2 - print the even numbers of the string
 * @str: Pointer that points to the string
 */
void puts2(char *str)
{
int i, len;

for (len = 0; str[len] != '\0'; ++len)
{
	;
}

for (i = 0; i < len; i += 2)
{
	_putchar(str[i]);
}

_putchar('\n');
}
