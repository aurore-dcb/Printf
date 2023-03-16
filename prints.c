#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str)
        write(1, &(*str++), 1);
}

void    ft_putnbr(int nb)
{
    long int n;

    n = (long int)nb;
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n > 9)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}

void    ft_print_hexa(int nb, char c)
{
    char *base;

    if (c == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";
    if (nb == 0)
        write(1, "0", 1);
    while (nb)
    {
        write(1, &(base[nb % 16]), 1);
        nb = nb / 16;
    }
}