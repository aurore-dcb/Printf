#include <unistd.h>

int    ft_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int    ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str && str[i])
        i++;
    return (i);
}

int    ft_putstr(char *str)
{
    if (str == NULL)
    {
        write(1, "(null)", 6);
        return (6);
    }
    while (*str)
        write(1, &(*str++), 1);
    return (ft_strlen(str));
}

// void    ft_print_hexa(int nb, char c)
// {
//     char *base;

//     if (c == 'x')
//         base = "0123456789abcdef";
//     else
//         base = "0123456789ABCDEF";
//     if (nb == 0)
//         write(1, "0", 1);
//     while (nb)
//     {
//         write(1, &(base[nb % 16]), 1);
//         nb = nb / 16;
//     }
// }