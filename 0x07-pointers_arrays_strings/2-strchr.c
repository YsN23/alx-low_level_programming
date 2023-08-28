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

while (s[i] != '\0')
{
if (s[i] == c)
{
	return (s + i);
}

s++;
}
return ('\0');

}
