#include "ft_printf.h"

int	find_specifier(va_list arg, char specifier)
{
	int	char_count;

	char_count = 0;
	if (specifier == 'c')
		char_count = ft_print_char(arg);
	else if (specifier == 's')
		char_count = ft_print_string(arg);
	else if (specifier == 'i' || specifier == 'd')
		char_count = ft_print_int(arg);
    else if (specifier == 'u')
		char_count = ft_print_unsigned_int(arg);
	else if (specifier == 'p')
		char_count = ft_print_hexa(arg, specifier);
	else if (specifier == 'x' || specifier == 'X')
		char_count = ft_print_hexa(arg, specifier);
	else if (specifier == '%')
	{
		ft_putchar_fd('%', 1);
		char_count++;
	}
	return (char_count);
}

int ft_printf(const char *format, ...)
{
    int i = 0;
    int char_count;
    va_list args;

    i = 0;
    char_count = 0;
    va_start(args, format);
    while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			char_count = char_count + find_specifier(args, format[i]);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			char_count++;
		}
		i++;
	}
    va_end(args);
    return char_count;
}
