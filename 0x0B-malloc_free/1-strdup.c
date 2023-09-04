#include "main.h"
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to a newly allocated space in memo
* @str: string
* Return: Pointer to the newly duplicated string
*/

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int length = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	ptr = (char *)malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
