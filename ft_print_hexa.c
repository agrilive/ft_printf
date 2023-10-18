#include "ft_printf.h"

static char *convert_to_hexadecimal(unsigned long long nbr, char *hex_chars)
{
    char *result;
    int len;
    unsigned long long tmp;
    
    len = 0;
    tmp = nbr;
    if (nbr == 0)
        return (ft_strdup("0"));
    while (tmp != 0)
    {
        len++;
        tmp /= 16;
    }
    result = (char *)malloc(len + 1);
    if (!result)
        return (NULL);
    result[len] = '\0';
    while (nbr != 0)
    {
        result[--len] = hex_chars[nbr % 16];
        nbr /= 16;
    }
    return (result);
}

int ft_print_hexa(va_list args, char specifier)
{
    unsigned long long  value;
    char    *hex_chars;
    char    *hex_str;
    int     len;

    if (specifier == 'x') 
        hex_chars = "0123456789abcdef";
    else if (specifier == 'X')
        hex_chars = "0123456789ABCDEF";
    else
    {
        hex_chars = "0123456789abcdef";
        value = (unsigned long long)va_arg(args, void*);
        ft_putstr_fd("0x", 1);
    }
    if (specifier != 'p')
        value = va_arg(args, unsigned int);
    hex_str = convert_to_hexadecimal(value, hex_chars);
    ft_putstr_fd(hex_str, 1);
    len = ft_strlen(hex_str);
    if (specifier == 'p')
        len += 2;
    free(hex_str);
    return (len);
}