#include "main.h"
/**
 * _strlen - the length of a string
 * @s: char to check
 * Description: this will retuen the legth of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
