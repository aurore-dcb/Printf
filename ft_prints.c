#include "ft_printf.h"

int    ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int    ft_strlen(const char *str)
{
    int i;
    
    i = 0;
    while (str && str[i])
        i++;
    return (i);
}

int    ft_putstr(char *str)
{
    if (!str)
    {
        write(1, "(null)", 6);
        return (6);
    }
    while (*str)
        write(1, &(*str++), 1);
    return (ft_strlen(str));
}