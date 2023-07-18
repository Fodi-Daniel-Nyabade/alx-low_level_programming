#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 */

void print_alphabet_x10(void)
{
	for (int limit = 0; limit < 10; limit++)
	{
		for (char letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	}
	_putchar('\n');
}
