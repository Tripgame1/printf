#include "main.h"

/* DOUKI EL HASSAN && Mohamed Elouahidi*/
/**
 * _printf - our printf version for alx PLD
 * @format: format
 * Return: size_f
 */

int _printf(const char *format, ...)
{
	int size_f = 0;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	size_f = _strlen(format);
	if (size_f <= 0)
		return (0);

	va_start(args, format);
	size_f = checker(format, args);

	_putchar(-1);
	va_end(args);

	return (size_f);
}
