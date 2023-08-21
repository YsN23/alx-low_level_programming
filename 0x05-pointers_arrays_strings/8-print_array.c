#include <stdio.h>
#include "main.h"

/**
 * print_array - Print Elements of an array
 * @a: Pointer Oint to an integer
 * @n: integer
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
	if (i != (n - 1))
		printf("%d, ", a[i]);
	else
		printf("%d", a[i])
}
printf("\n");
}
