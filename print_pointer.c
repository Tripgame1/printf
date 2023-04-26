#include "main.h"

/* DOUKI EL HASSAN && Mohamed Elouahidi*/
/**
 * _strcmp - funct make change string to upper case
 *
 * @s1: string
 * @s2: string
 *
 * Return: integer
 */


int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}


/**
 * _print_pointer - function that print adresse
 *
 * @list: list
 *
 * Return: string len
 */


int _print_pointer(va_list list)
{
	char *p;
	int c;

	p = _magic(va_arg(list, unsigned long int), 16);

	if (!_strcmp(p, "0"))
		return (print("(nil)"));

	c = print("0x");

	if (!_strcmp(p, "-1"))
		c += print("ffffffffffffffff");
	else
		c += print(p);

	return (c);
}


