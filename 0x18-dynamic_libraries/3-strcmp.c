#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{
for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
}
return (0);
}
