#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * @num: the unknown number
 */

void print_to_98(int num)
{
	if (num >= 98)
	{
		while (num > 98)
			printf("%d, ", num--);
		printf("%d\n", num);
	}

	else
	{
		while (num < 98)
			printf("%d, ", num++);
		printf("%d\n", num);
	}
}
