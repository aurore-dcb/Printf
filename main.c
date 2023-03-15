#include <unistd.h>
#include <stdio.h>
#include <stdarg.h> // pour va_arg, va_copy, va_end, va_start
// ou #include <varargs.h>
void    ft_putstr(char *str);
void    ft_putnbr(int nb);

int is_an_option(char c)
{
    if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
        || c == 'u' || c == 'x' || c == 'X' || c == '%')
        return (1);
    return (0);
}

// int     define_args()

/* en cas de succes, printf renvoie le nombre de caractères ecris
sinon printf renvoie un nombre negatif */
int ft_printf(const char *format, ...)
{
    int     i;
    int     k;
    int     d;
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
                //fonction that reads args
                // printf("format[i] : %c", format[i]);
                if (format[i] == 'd')
                {
                    d = va_arg(args, int);
                    ft_putnbr(d);
                }
                i++;
            }
            else
                return (-1);
        }
    }
    res[k] = '\0';
    // ft_putstr(res);
    // printf("d : %d\n", d);
    return (1);
}
int main()
{
    ft_printf("test %d : %d", 12, 42);
    return (0);
}