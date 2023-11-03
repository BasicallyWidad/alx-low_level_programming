#include "main.h"

/**
 * print_most_numbers - prints numbers through 0 to 9 without 2 and 4
 * return: void
 */

void print_most_numbers(void)
{
	char c = '0'

	while (c <= '9')
	{
		if (c == '2' || c == '4')
			continue;
		else
		{
			_putchar(c);
		}
		c++;
	}
	 _putchar('\n');
}
