#include "ft_printf.h"

int ft_print_ptr(long int p)
{
    char *base;
    char res[20];
    int i;
    int len;

    base = "0123456789abcdef";
    i = 0;
    len = 0;
    if (p == 0)
        return (ft_putstr("(nil)"));
    write(1, "0x", 2);
    len += 2;
    while (p)
    {
        res[i++] = base[p % 16];
        p /= 16;
    }
    while (i--)
		len += ft_putchar(res[i]);
    return (len);
}