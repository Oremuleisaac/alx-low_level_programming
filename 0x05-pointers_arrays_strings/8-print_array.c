#include "main.h"
#include <stdio.h>
/**
 * print_arry - prints i element of an arry of integers
 * @a: int to check
 * @n: int to check
 * Return: 0 is success
 */
void print_arry(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}
