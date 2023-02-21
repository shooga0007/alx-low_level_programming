#include "main.h"

/**
 * print_alphabet - Print the alphabets in lowercase
 *
 * void function: Nothing to return
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
