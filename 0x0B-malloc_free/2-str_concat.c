#include <stdio.h>
#include <stdlib.h>


/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: result
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1 = 0;
	unsigned int i;
	unsigned int len_s2 = 0;
	char *result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}


	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{

		result[i] = s1[i];
	}

	for (i = 0; i < len_s2; i++)
	{

		result[len_s1 + i] = s2[i];
	}

	result[len_s1 + len_s2] = '\0';

	return (result);
}
