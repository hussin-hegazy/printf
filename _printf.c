#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - function my printf
 * @format: string whit format to print
 *
 * Return: number of chars that print
 */
int _printf(const char *format, ...)
{
    va_list as;
    va_start(as, format);
    vprintf(format, as);
    va_end(as);
}
