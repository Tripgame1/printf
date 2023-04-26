#include "main.h"
/* DOUKI EL HASSAN && Mohamed Elouahidi*/

/**
 * *_magic - function convert any integer to ASCII
 * @n: variable long int
 * @base: base to convert to
 * Return: char pointer
 */

char *_magic(long int n, int base)
{
	static char buffer[50];
	static char *arr = "0123456789abcdef";
	char sign = 0;
	char *p;
	unsigned long nbr = n;

	if (n < 0)
	{
		nbr = -n;
		sign = '-';
	}
	p = &buffer[49];
	*p = '\0';

	do {
		*--p = arr[nbr % base];
		nbr /= base;
	} while (nbr != 0);

	if (sign)
		*--p = sign;

	return (p);
}
