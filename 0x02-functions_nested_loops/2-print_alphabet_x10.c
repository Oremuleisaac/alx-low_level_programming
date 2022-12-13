#include "main.h"

/**
 * print alphabet - print x10 all alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int 10;

	char letter;

	for (10 = 0; 10 <= 9; 10++)

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
