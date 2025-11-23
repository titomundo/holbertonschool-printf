#ifndef MYHEADER_H
#define MYHEADER_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *formt, ...);
int ptr_char(char c);
int ptr_str(char *s);

int prt_str(va_list args, char *b, unsigned int n);
int prt_chr(va_list args, char *b, unsigned int n);

#endif
