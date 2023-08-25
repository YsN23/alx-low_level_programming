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
char arr1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char arr2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

while (i != '\0')
{
for (j = 0; j < 10; i++)
{
	if (str[i] == arr1[j])
	{
		str[i] = arr2[j];
	}
}
i++;
}
return (str);
}


