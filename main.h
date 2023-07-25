#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>

#define BUFF_SIZE 1024

#define FLAG_MINUS 1
#define FLAG_PLUS 2
#define FLAG_ZERO 4
#define FLAG_HASH 8
#define FLAG_SPACE 16

#define S_LONG 2
#define S_SHORT 1

int _printf(const char *format, ...);

#endif