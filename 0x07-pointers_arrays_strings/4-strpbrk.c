#include "main.h"

/**
 * _strpbrk - function that searches a str for any of a set of bytes
 * @s: Pointer To string
 * @c
*/


char *_strpbrk(char *s, char *accept)
{
int i = 0;
int j = 0;

while (s[i] != '\0')
{
	if (s[i] != ' ')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;

		}

	}
	i++;

}
}
