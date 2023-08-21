#include "main.h"

/**
 * swap_int - swap the values of a and b
 * @a: Pointer who Point to an integer.
 * @b: Pointer who Point to an integer
*/

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
