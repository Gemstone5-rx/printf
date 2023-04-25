#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/**
 * struct printt - structure for printing various types
 * @type: type to print
 * @function: associated function to print
 */

struct print
{
	char *type;
	int (*function)(va_list);
};
typedef struct print print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list c);
int print_string(va_list s);
int print_percent(va_list %);
int print_decimal(va_list d);
int print_int(va_list i);


#endif
