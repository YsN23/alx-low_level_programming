#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 */
void print_alphabet_x10(void)
{
char lowercaseAlphabet = 'a';
int repetition;

for (repetition = 0; repetition < 10; repetition++)
{
	for (lowercaseAlphabet = 'a'; lowercaseAlphabet <= 'z'; lowercaseAlphabet++)
	{
		_putchar(lowercaseAlphabet);
	}

	_putchar('\n');
}
}
