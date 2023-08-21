#include "main.h"

/**
 * print_rev - Print a reverse string
 * @str: a Pointer that Points to a string
*/

void print_rev(char *str)
{
int length = 0;
int i;

while (str[length] != '\0')
{
	length++;
}

for (i = length - 1; i >= 0; i--)
{
	_putchar(str[i]);
}
_putchar('\n');
}
