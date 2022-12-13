#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int count, lower;

	for (count = 0; count <= 9; count++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
	-putchar('\n');
	}
}
