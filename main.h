#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int prntstrng(char *str);
int prnt_char(char c);
int spec_checker(char format, va_list argp);
#endif
