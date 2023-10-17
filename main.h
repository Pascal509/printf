#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 1024
#define LENGTHY 2
#define SHORTY 1



/* FLAGS */
#define IS_MINUS 1
#define IS_PLUS 2
#define IS_ZERO 4
#define IS_HASH 8
#define BLANK_SPACE 16



/**
 * struct format - Struct op
 *
 * @format: The format specifier.
 * @function: The function therein.
 */

typedef struct format
{
        char fmt_spec;
        int (*function)(va_list, char *, int, int, int, int);
} format;




int _putchar(char c);
int _printf(const char *format, ...);

 int format_num(int index_1, char buff[], int flags, int width,
 int precision, int len, char padin, char xtra_ch);

int write_formatted_num(char buff[], int index_1, int flags, char xtra_ch);

int handle_unsupported_fmts(const char *fmt_spec, int *index_1, int width);
int match_fmt_specifier(const char *fmt_spec, int *index_1, va_list ap,
                char buff[], int flags, int width, int precision, int len_modifier);

int find_len_modifier(const char *format, int *index);

int find_format_specifier(const char *format, int *current_index);
int (*handle_fmt_spec(char format_specifier))(va_list ap, char *buff,
int, int, int, int);


int handle_printing(const char *format, int *index_1, va_list ap, char buff[],
int flags, int width, int precision, int len_modifier);

int handle_fmt_specifier(const char *format, int *index_1, va_list ap, char buff[],
                int flags, int width, int precision, int len_modifier);

int percent_print(va_list ap, char __attribute__((unused))buff[],
int flag, int width, int precision, int len_modifier);
int is_Digit(int n);
int is_printable(char chrs);

int string_print(va_list ap, char buff[], int flag, int width,
                  int precision, int len_modifier);

int find_precision(const char *format, int *current_index, va_list ap);

int chrs_print(va_list ap, char buff[], int flag,
                int width, int precision, int len_modifier);
int find_flags(const char *format, int *index);
void printBuffer(char buff[], int *indexed_buffer);
int find_width(const char *format, int *index, va_list ap);
int man_chrs_write(char chrs, char buff[],
int flags, int width, int precision, int len_modifier);
int handle_num_chrs(int less_than_0, int index, char buff[],
int flags, int width, int precision, int len_modifier);

int handle_chrs_write(char chrs, char buff[],
int flags, int width, int precision, int len_modifier);

int print_int(va_list types, char buffer[],
        int flags, int width, int precision, int size);

int print_binary(va_list types, char buffer[],
        int flags, int width, int precision, int size);

int get_precision(char const *format, int *index);


#endif
