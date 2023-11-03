#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: the number of times _ should be printed
 * return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	else
		_putchar('\n');
}
