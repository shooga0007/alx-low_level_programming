#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @C: The character to print
 * Return: 0n success 1.
 * 0n error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
