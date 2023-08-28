#include "main.h"

/**
 * _strchr - find the first occurence c in s
 * @s: Pointer Point To string
 * @c: char to find
 * Return: s[c] (Success) otherwise NULL
*/

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
	return (s + i);
}
return ('\0');
}
