#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char count, lower;

	for (count = '0'; count <= '9'; count++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
	_putchar('\n');
	}
}
