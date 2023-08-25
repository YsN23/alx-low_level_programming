#include "main.h"

/**
 * leet - Encrypts a String
 * @str: Pointer Points To a string
 * Return: str
*/

char *leet(char *str)
{
int i = 0;
int j;
char *arr1 = "aAeEoOtTlL";
char *arr2 = "4433007711";

while (i != '\0')
{
	while (j < 10)
	{
		if (str[i] == arr1[j])
		{
			str[i] = arr2[j];
			break;
		}
	j++;
	}
i++;
}
return (str);
}


