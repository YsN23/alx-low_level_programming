#include "main.h"

/**
 * _isdigit - checks if a character is digit
 * @c: The character to be checked
 *
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
	return (1);
}

else
{
	return (0);
}
