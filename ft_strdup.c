#include "ft_printf.h"

char    *ft_strdup(const char *s1)
{
    int     len;
    char    *dup;
    
    len = ft_strlen(s1);
    dup = (char *)malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return NULL;
    for (int i = 0; i < len; i++)
    {
        dup[i] = s1[i];
    }
    dup[len] = '\0';
    return (dup);
}