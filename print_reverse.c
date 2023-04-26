#include "main.h"


/* DOUKI EL HASSAN && Mohamed Elouahidi*/
/**
 * _print_rev_string - function reverse string %r
 *
 * @list: list
 *
 * Return: c wish containes string len
 **/

int _print_rev_string(va_list list)
{
	int i, c;
	char *p;


	p = va_arg(list, char *);
	c = _strlen(p);

	for (i = c - 1; i >= 0; i--)
		_putchar(p[i]);

	return (c);
}
