#include "main.h"
/**
 * swap_int - swaps the value of a and b
 * @a: first int
 * @b: secont int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}