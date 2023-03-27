#include "include/ft_printf.h"

int     size_nb_hexa(unsigned int nb)
{
    int compteur;

    compteur = 0;
    if (nb == 0)
        return (1);
    while (nb)
    {
        compteur++;
        nb = nb / 16;
    }
    return (compteur);
}

void ft_print_hexa(unsigned int nb, char c)
{
    char *base;
    long int n;

    n = (long int)nb;
    if (c == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";
    if (n > 15)
        ft_print_hexa(n / 16, c);
    ft_putchar(base[n % 16]);
}

int convert_hexa(unsigned int nb, char c)
{
    ft_print_hexa(nb, c);
    return (size_nb_hexa(nb));
}
