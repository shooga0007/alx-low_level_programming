#include <stdio.h>
#include "main.h"

/**
 * main - prints sum of even valued fibonacci numbers under 4,000,000
 * Return: 0 if successful
 */

int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
