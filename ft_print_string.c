#include "ft_printf.h"

int ft_print_string(va_list args)
{
    char *str;

    str = va_arg(args, char*);
    if (str == NULL)
    {
        str = "(null)";
    }
    ft_putstr_fd(str, 1);
    return (ft_strlen(str));
}