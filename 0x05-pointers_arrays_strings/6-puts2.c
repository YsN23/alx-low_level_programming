#include "main.h"

/**
 * puts2 - print the even numbers of the string
 * @str: Pointer that Point To string
*/

void puts2(char *str)
{
int i, len;

for (len = 0; str[len] != '\0'; ++len)
{
	;
}

for (i = 0 ; i < len ; i++)
{
	if (str[i] % 2 == 0)
	{
		_putchar(i + '0');
	}

	else
	{
		continue;
	}
}
_putchar('\n');
}
