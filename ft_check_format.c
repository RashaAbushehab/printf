#include "ft_printf.h"

int	ft_check_format(va_list args,  const char *format)
{
	int	i;

	i = 0;

	if (format[i] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format[i] == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format[i] == 'd' || format[i] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format[i] == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (format[i] == 'p')
		return (ft_putptr(va_arg(args, unsigned long long)));
	else if (format[i] == 'x' || format[i] == 'X')
		return (ft_puthex(va_arg(args, unsigned int), format));
	else if (format[i] == '%')
		return (ft_putchar('%'));
	return (0);
}
