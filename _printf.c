#include "main.h"

/**
 *check_format - checks if there is a valid format specifier
 *@format: possible valid format specifier
 *Return: pointer to valid function or NULL
 */

int (*check_format(const char *format))(va_list)
{
	int i = 0;
	print_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_int},
		{"b", print_binary},
		{"u", print_unsigned integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_String},
		{"p", print_pointer},
		{NULL, NULL}
	};

	for (i=0; p[i].type != NULL; i++)
	{
		if (*(p[i].type) == *format)
			break;
	}
	return (p[i].function);
}

/**
 * _printf - Produces outpur according to a format
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list name;
	int (*function)(va_list);
	unsigned int i = 0, counter = 0;

	if (format == NULL)
		return (-1);

	va_start(name, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				counter++;
				i += 2;
				continue;
			}
			else
			{
				function = check_format(&format[i + 1]);
				if (function == NULL)
					return (-1);
				i += 2;
				counter += function(name);
				continue;
			}
		}
	}
	va_end(name);
	return (counter);
}
