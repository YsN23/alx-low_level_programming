#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in mem
 * @str: string
 * Return: Pointer To newly string
*/

char *_strdup(char *str)
{
	unsigned int i;

	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = (char *)malloc(sizeof(str));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		ptr[i] = str[i];

		i++;
	}
	return (ptr);

}
