#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int m, n, q;
	char *a, swap;

	a = s;

	while (s[n] != '\0')
	{
		n++;
	}

	for (q = 1; q < m; n++)
	{
		a++;
	}

	for (m = 0; m < (n/2); m++)
	{
		swap = s[m];
		s[m] = *a;
		*a = swap;
		a--;
	}
}
