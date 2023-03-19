#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h> // pour va_arg, va_copy, va_end, va_start

#include <stdio.h>

int    ft_putchar(char c);
int    ft_strlen(char *str);
int    ft_putstr(char *str);
int     ft_print_nbr(int nb);
// void    ft_print_hexa(int nb, char c);
int     ft_print_hex(unsigned int num, const char format);
void    ft_put_unsigned_nbr(unsigned int nbr);