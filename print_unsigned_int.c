#include "main.h"

/* DOUKI EL HASSAN && Mohamed Elouahidi*/
/**
 * _print_unsigned_int - function that print unsigned int
 *
 * @list: list
 *
 * Return: c
 */


int _print_unsigned_int(va_list list)
{
	char *p;
	int c;

	p = _magic(va_arg(list, unsigned int), 10);

	c = print((p != NULL) ? p : "NULL");


	return (c);
}
