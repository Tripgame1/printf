#include "main.h"

/* DOUKI EL HASSAN && Mohamed Elouahidi */
/**
 * _rot13 - function help to crypt rot13
 * @s: string
 * Return: string
 */


int _rot13(char *s)
{
	int i = 0;
	int c = 0;

	if (!s)
		return (print("(null)"));
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			c += _putchar((((s[i] - 'a') + 13) % 26) + 'a');
		if (s[i] >= 'A' && s[i] <= 'Z')
			c += _putchar((((s[i] - 'A') + 13) % 26) + 'A');
		else
			c += _putchar(s[i]);
		i++;
	}
	return (c);

}


/* DOUKI EL HASSAN && Mohamed Elouahidi */
/**
 * _print_rot13 - main function of rot13
 * @list: list
 * Return: len of string
 */


int _print_rot13(va_list list)
{
	char *p;
	int i, j;
	char r[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char R[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	p = va_arg(list, char *);

	for (j = 0; p[j]; j++)
	{
		if (p[j] < 'A' || (p[j] > 'Z' && p[j] < 'a') || p[j] > 'z')
			_putchar(p[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (p[j] == r[i])
					_putchar(R[i]);
			}
		}
	}

	return (j);
}

