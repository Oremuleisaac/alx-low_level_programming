#include "main.h"
/**
 * _isupper - checks for uppercase charater
 * @c: Variable text
 * Return: Always 0.
 */
int_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
