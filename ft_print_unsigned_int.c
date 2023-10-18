#include "ft_printf.h"

int ft_print_unsigned_int(va_list args)
{
    unsigned int     value;
    char    *str;

    value = va_arg(args, unsigned int);
    str = ft_utoa(value);
    ft_putstr_fd(str, 1);
    free(str);
    return (ft_strlen(str));
}