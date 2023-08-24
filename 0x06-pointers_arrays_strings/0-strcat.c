#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 *
 * @dest: destination Param
 * @src: source param
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int c, c2;

for (c = 0; dest[c] != '\0'; c++)
{
	continue;
}
for (c2 = 0; src[c2] != '\0'; c2++)
{
	dest[c] = src[c2];
	c++;
}
dest[c] = '\0';
return (dest);
}