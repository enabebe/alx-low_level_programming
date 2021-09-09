#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int n;

	if (n < 0)
        {
                _putchar(45);
                n = -n;
        }

        if (n > 9)
        {
                print_number(n/10);
        }

        _putchar((n%10) + '0');

        return 0;
}
