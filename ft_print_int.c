#include "ft_printf.c"

int ft_print_int(va_list args)
{
    int     value;
    char    *str;

    value = va_arg(args, int);
    str = ft_itoa(value);
    ft_putstr_fd(str, 1);
    free(str);
    return (ft_strlen(str));
}