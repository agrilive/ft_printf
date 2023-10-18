#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *str, int fd);
size_t	ft_strlen(const char *str);
char	*ft_itoa(int nbr);
char    *ft_utoa(unsigned int nb);
char    *ft_strdup(const char *s1);

int     ft_printf(const char *format, ...);
int		ft_print_char(va_list arg);
int     ft_print_string(va_list args);
int     ft_print_int(va_list args);
int     ft_print_unsigned_int(va_list args);
int     ft_print_hexa(va_list args, char specifier);

#endif