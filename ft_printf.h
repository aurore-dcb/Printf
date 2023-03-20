#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h> // pour va_arg, va_copy, va_end, va_start

#include <stdio.h>

int    ft_putchar(char c);
int    ft_strlen(const char *str);
int    ft_putstr(char *str);
int     ft_print_nbr(int nb);
int     size_nb(int nb);
int convert_hexa(unsigned int nb, char c);
// int ft_print_hexa(int nb, char c);
// int     size_nb_hexa(int nb);
// int     ft_print_hex(unsigned int num, const char format);
int     ft_print_unsigned(unsigned int nb);