#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This function prints the sizes of different data types.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char a = 'b';
int num = 46568;
long int N = 164724245;
long long int R = 2137108271611771;
float pi = 3.142316;

printf("Size of a char: %d byte(s)\n", sizeof(a));
printf("Size of an int: %d byte(s)\n", sizeof(num));
printf("Size of a long int: %ld byte(s)\n", sizeof(N));
printf("Size of a long long int: %ld byte(s)\n", sizeof(R));
printf("Size of a float: %d byte(s)\n", sizeof(pi));
return (0);
}
