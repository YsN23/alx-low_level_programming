#include "main.h"

/**
 * reverse_array - function that reverse an array of int
 * @a: pointer points to the firsr element in array
 * @n: number of elements in a
*/


void reverse_array(int *a, int n)
{
int i, j, temp;
for (i = 0, j = n - 1; i < j; i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
