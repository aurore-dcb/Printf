#include "ft_printf.h"

int    ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int    ft_strlen(char *str)
{
    int i;
    
    i = 0;
    if (str != NULL)
    {
        while (str[i])
            i++;
    }
    return (i);
}

int    ft_putstr(char *str)
{
    int i;

    if (!str)
    {
        write(1, "(null)", 6);
        return (6);
    }
    i = 0;
    while (str[i])
        write(1, &(str[i++]), 1);
    return (i);
}