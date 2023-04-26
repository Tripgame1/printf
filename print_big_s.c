#include "main.h"
/* DOUKI EL HASSAN && Mohamed Elouahidi*/
/**
 *switch_me - convert any version unsigned long int to base 2 8 10 16
 *@n: the number to convert
 *@base: base to convert into
 *@lowc: case if hexa need to be low
 *Return: return nbr at the end
 */

char *switch_me(unsigned long int n, int base, int lowc)
{
	const char *digits = lowc ? "0123456789abcdef" : "0123456789ABCDEF";
	static char buffer[50];
	char *p = buffer + sizeof(buffer) - 1;
	*p = '\0';

	do {
		*--p = digits[n % base];
		n /= base;
	} while (n != 0);

	return (p);
}



/**
 *_print_big_s - function handling %S
 *@list: list
 *Return: return len of string
 */




int _print_big_s(va_list list)
{
	int i, c = 0;
	char *p = va_arg(list, char *);
	char *r;


	if (!p)
		return (print("(null)"));


	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] > 0 && (p[i] < 32 || p[i] >= 127))
		{
			print("\\x");
			c += 2;
			r = switch_me(p[i], 16, 0);
			if (!r[1])
				c += _putchar('0');
			c += print(r);
		}
		else
			c += _putchar(p[i]);
	}

	return (c);
}


