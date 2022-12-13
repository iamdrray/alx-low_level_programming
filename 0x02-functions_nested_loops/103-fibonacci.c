#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fib3, fibsum;

	while (1)
	{
		fib3 = fib1 + fib2;
		if (fib3 > 4000000)
			break;

		if ((fib3 % 2) == 0)
			fibsum += fibsum;

		fib1 = fib2;
		fib2 = fib3;
	}
	printf("%lu\n", fibsum);

	return (0);
}
