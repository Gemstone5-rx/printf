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
 * struct format - structure for format
 * @format: The format to be used
 * @f: associated function
 */

struct format
{
	char *format
	int (*f)(va_list);
};
typedef struct format forma_t;

int _printf(const char *format, ...);

#endif
