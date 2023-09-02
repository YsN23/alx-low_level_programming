#include <stdio.h>

/**
 * main - Print The numbers of arguments in CL
 * @argc: integer
 * @argv: pointer to array of string
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
