#include "main.h"

/* DOUKI EL HASSAN && Mohamed Elouahidi */

/**
 * _rev_str - our printf  reverse string
 * @list: list
 * Return: len of string
 */


int _rev_str(va_list list)
{
	int i = 0;
	int c = 0;
	char *s = va_arg(list, char *);

	if (!s)
		return (print("null"));
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		c += _putchar(s[i]);
		i--;
	}
	return (c);
}
