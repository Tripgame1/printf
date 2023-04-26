#include "main.h"

/* DOUKI EL HASSAN && Mohamed Elouahidi*/

/**
 * _print_int - function print int handel %d %i
 *
 * @list: list
 *
 * Return: len of number i decimal (c)
 */

int _print_int(va_list list)
{
	int c;
	char *p;

	p = _magic(va_arg(list, int), 10);
	c = print((p != NULL) ? p : "NULL");

	return (c);
}
