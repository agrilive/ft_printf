#include <stdlib.h>

int ft_numlen(int nb)
{
    int len;

    len = 0;
    if (nb == 0)
        return 1;
    if (nb < 0)
        len++;
    while (nb != 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int nbr)
{
    long    nb;
    int     length;
    int     i;
    char *str;

    nb = nbr;
    i = 0;
    length = ft_numlen(nbr);
    str = (char *)malloc(length + 1);
    if (nb < 0)
        nb = -nb;
    str[length] = '\0';
    length--;
    while (length >= i)
    {
        str[length] = (nb % 10) + '0';
        nb /= 10;
        length--;
    }
    if(nbr < 0)
        str[0] = '-';
    return (str);
}