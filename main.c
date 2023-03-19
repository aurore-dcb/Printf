/* A FAIRE : 
    - %d et %i a l'aide de itoa
    - dans putstr si NULL afficher (null)
    - compter le nombre de caracteres affichés dans chaque fonction
    - %p
*/

#include "ft_printf.h"

int is_an_option(char c)
{
    if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
        || c == 'u' || c == 'x' || c == 'X' || c == '%')
        return (1);
    return (0);
}

int     conversion(va_list args, char c)
{
    int len;

    len = 0;
    if (c == 'c')
        len += ft_putchar(va_arg(args, int));
    else if (c == 's')
        len += ft_putstr(va_arg(args, char *));
    // else if (c == 'p')
    //     ft_putstr(va_arg(args, ));
    else if (c == 'd' || c == 'i')
        len += ft_print_nbr(va_arg(args, int));
    else if (c == 'u')
        len += ft_put_unsigned_nbr(va_arg(args, unsigned int));
    else if (c == 'x' || c == 'X')
        // ft_print_hexa(va_arg(args, int), c);
        len += ft_print_hex(va_arg(args, int), c);
    else if (c == '%')
        len += ft_putchar('%');
}

/* en cas de succes, printf renvoie le nombre de caractères ecris
sinon printf renvoie un nombre negatif */
int ft_printf(const char *format, ...)
{
    int     i;
    int     nb_chars;
    va_list args;
    
    i = 0;
    nb_chars = 0;
    va_start(args, format);
    while (format[i])
    {
        while (format[i] && format[i] != '%')
            nb_chars += ft_putchar(format[i++]);
            // write(1, &(format[i++]), 1);
        while (format[++i] && format[i] == ' ');
        if (is_an_option(format[i]))
        {
            
            i++;
        }
        else
            return (-1);
    }
    va_end(args);
    return (1);
}
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{
    // ft_printf("test : %%%%%s\n", -9);
    // ft_printf("test %X : %u\ntest 2 : %%", 91, -42);
    // printf("test : %%\n", 033);
    printf("%d", itoa(027));
    return (0);
}