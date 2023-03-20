#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int     ft_putchar(char c);
int     ft_strlen(const char *str);
int     ft_putstr(char *str);
int     ft_print_nbr(int nb);
int     size_nb(int nb);
int     convert_hexa(unsigned int nb, char c);
int     ft_print_ptr(long int p);
int     ft_print_unsigned(unsigned int nb);
int     ft_printf(const char *format, ...);