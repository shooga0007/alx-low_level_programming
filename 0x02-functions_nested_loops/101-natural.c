#include <stdio.h>
#include "main.h"

/**
 * main - computes and prints the sum of all the multiples of 3 0r 5 below 1024
 * Return: 0 if successful
 */

int main(void)
{
	int sum, i;

	for (i = 1023, sum = 0; i; i--)
		if (!(i % 3) || !(i % 5))
		sum += i;
printf("%d\n", sum);

return (0);
}
