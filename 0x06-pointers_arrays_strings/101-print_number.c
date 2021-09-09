#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
 	  if (n < 0)
        {
                _putchar(0x2D);
                n = -n;
        }

        if (n > 9)
        {
                _put_nbr(n/10);
        }

        _putchar((n%10) + '0');

        return 0;
}
