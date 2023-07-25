#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
        va_list args;
        va_start(args, format);

        int char_count;
        char_count = 0;

        while (*format != '\0')
        {
                if (*format == '%')
                {
                        format++;

                        switch (*format)
                        {
                        case 'c':
                        {
                                int c = va_arg(args, int);
                                putchar(c);
                                char_count++;
                                break;
                        }
                        case '%':
                                putchar('%');
                                char_count++;
                                break;
                        case 's':
                        {
                                char *str = va_arg(args, char *);
                                while (*str != '\0')
                                {
                                        putchar(*str);
                                        str++;
                                        char_count++;
                                }
                                break;
                        }
                        default:
                                putchar('%');
                                putchar(*format);
                                char_count += 2;
                        }
                }
                else
                {
                        putchar(*format);
                        char_count++;
                }
                format++;
        }
}