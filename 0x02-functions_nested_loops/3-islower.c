#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1'); /* Character is lowercase */
		return (1);
	}
	else
	{
		_putchar('0'); /* Character is not lowercase */
		return (0);
	}
}
