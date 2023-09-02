#include <stdio.h>

/**
 * main - Print The numbers of arguments in CL
 * @argc: integer
 * @argv: pointer to array of string
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
