#include "main.h"

/**
 * print alphabet - print x10 all alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
