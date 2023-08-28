#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: Pointer Point to string
 * @accept: Pointer Point To string
 * Return: result
*/

unsigned int _strspn(char *s, char *accept)
{
int result = 0;
int i;

while (s[i] != '\0')
{
if (s[i] == accept)
{
	return (result += 1);
}

i++;
}

return ('\0');

}
