#include "ft_printf.h"

int ft_print_char(va_list args)
{
    char c;
    
    c = va_arg(args, int);
    ft_putchar_fd(c, 1);
    return (1);
}