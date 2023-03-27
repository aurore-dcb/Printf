#include "include/ft_printf.h"

int     size_nb(int nb)
{
    int compteur;

    compteur = 0;
    if (nb == 0)
        return (1);
    if (nb < 0)
    {
        nb *= -1;
        compteur++;
    }
    while (nb)
    {
        compteur++;
        nb = nb / 10;
    }
    return (compteur);
}

char    *ft_itoa(int nb)
{
    int i;
    char *res;

    i = size_nb(nb) - 1;
    res = malloc(sizeof(char) * (size_nb(nb) + 1));
    if (!res)
        return (NULL);
    res[i] = '\0';
    if (nb == 0)
    {
        res[0] = '0';
        return (res);
    }
    if (nb < 0)
    {
        res[0] = '-';
        nb *= -1;
    }
    while (nb)
    {
        res[i--] = nb % 10 + '0';
        nb = nb / 10;
    }
    return (res);
}

int ft_print_nbr(int nb)
{
    int len;
    char *str;

    len = 0;
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return (11);
    }
    str = ft_itoa(nb);
    if (str != NULL)
    {
        len = ft_strlen(str);
        ft_putstr(str);
    }
    free(str);
    return (len);
}
