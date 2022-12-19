#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line
 * @str: string to be printed
 */

void puts2(char *str)
{
	int c;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			l = str[c];
			_putchar(l);
		}
	}
	_putchar('\n');
}
