#include "main.h"

/**
 * print_char - Prints a char
 * @c: printed character
 * Return: Always 1 (Success)
 */

int print_char(va_list c)
{
	char c = (char)va_arg(c, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - Prints a string
 * @s: printed string
 * Return: i
 */

int print_string(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
		_putchar(str[i++]);
	return (i);
}

/**
 * print_percent - Prints a percent symbol
 * @p: percent symbol to be printed
 * Return: amount of characters printed)
 */

int print_percent(va_list %)
{
	_putchar('%');
	return (1);
}
