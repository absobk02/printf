#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_num(long int n);
int print_string(char *str);
int print_binary(unsigned int num);
int print_unknown_spec(char c);
int print_odh(char c, unsigned int num);
int dec_to_oct(unsigned int num);
int dec_to_hex(char c, unsigned int num);
int print_S(char *);
int print_reverse(char *s);
int print_rot13(char *c);
int print_pointer(void *p);

int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);


int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* _putchar.c */
int _putchar(char);
int buffer(char);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif /* MAIN_H */
