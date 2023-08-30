#include "main.h"

/**
 * _strlen_recursion - calculates the lenght with recursion
 * @s: Pointer Point to string
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));

}
