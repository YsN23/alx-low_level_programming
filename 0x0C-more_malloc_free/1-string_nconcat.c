#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings
* @s1: first str
* @s2: second str
* @n: size to be concatenated in s2
* Return: char (ptr)
*/


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
		char *ptr;

		unsigned int len1 = 0, len2 = 0, i, j;

		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";

		while (s1[len1] != '\0')
			len1++;

		while (s2[len2] != '\0')
			len2++;

		ptr = (char *)malloc((len1 + len2 + 1) * sizeof(char));

		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

		if (n >= len2)
		{
			for (i = 0; i < count; i++)
			{
				ptr[i + j] = s2;
			}

		}
		else
		{
			for (j = 0; j < len2; j++)
				ptr[i + j] = s2[j];
		}

		ptr[i + j] = '\0';
		return (ptr);
}
