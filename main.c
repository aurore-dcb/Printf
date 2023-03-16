#include <unistd.h>
#include <stdio.h>
#include <stdarg.h> // pour va_arg, va_copy, va_end, va_start
// ou #include <varargs.h>
void    ft_putchar(char c);
void    ft_putstr(char *str);
void    ft_putnbr(int nb);
void    ft_print_hexa(int nb, char c);
int	ft_print_hex(unsigned int num, const char format);

int is_an_option(char c)
{
    if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
        || c == 'u' || c == 'x' || c == 'X' || c == '%')
        return (1);
    return (0);
}

// int     define_type()

/* en cas de succes, printf renvoie le nombre de caractères ecris
sinon printf renvoie un nombre negatif */
int ft_printf(const char *format, ...)
{
    int     i;
    int     k;
    char    res[100]; // déterminer sa taille
    va_list args;
    
    i = 0;
    k = 0;
    va_start(args, format); // définir le pointeur le premier arg
    while (format[i])
    {
        while (format[i] && format[i] != '%')
            write(1, &(format[i++]), 1);
            // res[k++] = format[i++];
        if (format[i] == '%')
        {
            while (format[++i] && format[i] == ' ');
            if (is_an_option(format[i]))
            {
                if (format[i] == 'c')
                    ft_putchar(va_arg(args, int));
                else if (format[i] == 's')
                    ft_putstr(va_arg(args, char *));
                else if (format[i] == 'd' || format[i] == 'i' || format[i] == 'u')
                    ft_putnbr(va_arg(args, int));
                else if (format[i] == 'x' || format[i] == 'X')
                    // ft_print_hexa(va_arg(args, int), format[i]);
                    ft_print_hex(va_arg(args, int), format[i]);
                
                // //fonction that reads args
                // // printf("format[i] : %c", format[i]);
                // /*fct_affiche(*/ d = va_arg(args, /*fct type int*/ int);
                // ft_putnbr(d);
                i++;
            }
            else
                return (-1);
        }
    }
    res[k] = '\0';
    // ft_putstr(res);
    // printf("d : %d\n", d);
    va_end(args);
    return (1);
}
int main()
{
    ft_printf("test %X : %d\n", -91, 42);
    // printf("test : %X\n", -91);
    return (0);
}