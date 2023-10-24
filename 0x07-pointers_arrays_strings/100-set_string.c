#include "main.h"
/**
 * set_string - set the value of a pointer to char
 * @s: this is a pointer to a pointer
 * @to: pointer of char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
