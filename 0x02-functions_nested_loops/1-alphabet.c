#include "main.h"

/**
 * print_alphabet - use putchar function to print a to z in lower.
 *
 */

void print_alphabet(void)
{
char lowercaseAlphabet = 'a';

while (lowercaseAlphabet <= 'z')
{
	_putchar(lowercaseAlphabet);
	lowercaseAlphabet++;

}
_putchar('\n');
}
