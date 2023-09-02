#include <stdio.h>
#include <stdlib.h>

/**
* main - Print the product of two integers passed as command-line arguments
* @argc: integer (argument count)
* @argv: array of strings (argument values)
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int mul = 1;
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	num1 = atoi(argv[1]);

	num2 = atoi(argv[2]);

	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
