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
int i, j;

while (dest[i])
{
	i++;
}

for (j = 0; src[j] ; j++)
{
	dest[i++] = src[j];
}
return (dest);
}