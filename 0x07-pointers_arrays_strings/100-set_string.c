#include "main.h"

/**
 * set strings - set the value of a pointer to a char
 * @s: the pointer
 * @to: the char
 */
void set_string(char **s, char *to)
{
	*s = to;
}