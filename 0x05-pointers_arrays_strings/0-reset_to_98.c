#include "main.h"

/**
 * reset_to_98 - updates the value of a pointer to 98
 * @n: what the pointer points to
 * return: void
 */

void reset_to_98(int *n)
{
	if (*n != NULL)
	{
		*n = 98;
	}
}
