#include "ft_printf.h"

int ft_unsigned_numlen(unsigned int nb)
{
    int len;
    
    len = 0;
    if (nb == 0)
        return (1);
    while (nb != 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}

char    *ft_utoa(unsigned int nb)
{
    int     length;
    char    *str;
    
    length = ft_unsigned_numlen(nb);
    str = (char *)malloc(length + 1);
    if (str == NULL)
        return NULL;
    str[length] = '\0';
    length--;
    while (length >= 0)
    {
        str[length] = (nb % 10) + '0';
        nb /= 10;
        length--;
    }
    return (str);
}
