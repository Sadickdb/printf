#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
int print_unt(va_list arguments, char *buf, unsigned int ibuf);
int print_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_upx(va_list arguments, char *buf, unsigned int ibuf);
int print_usr(va_list arguments, char *buf, unsigned int ibuf);
int print_add(va_list arguments, char *buf, unsigned int ibuf);
int print_rev(va_list arguments, char *buf, unsigned int ibuf);
int print_rot(va_list arguments, char *buf, unsigned int ibuf);
int print_long_int(va_list arguments, char *buf, unsigned int ibuf);
int print_long_unt(va_list arguments, char *buf, unsigned int ibuf);
int print_long_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_long_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_long_upx(va_list arguments, char *buf, unsigned int ibuf);
int print_short_int(va_list arguments, char *buf, unsigned int ibuf);
int print_short_unt(va_list arguments, char *buf, unsigned int ibuf);
int print_short_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_short_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_short_upx(va_list arguments, char *buf, unsigned int ibuf);
int print_plus_int(va_list arguments, char *buf, unsigned int ibuf);
int print_num_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_num_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_num_upx(va_list arguments, char *buf, unsigned int ibuf);
int print_space_int(va_list arguments, char *buf, unsigned int ibuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);

#endif
