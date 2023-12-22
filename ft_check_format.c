#include "ft_printf.h"


int	ft_check_format(va_list args, const char *format)
{
	int	i;

	i = 0;

	if (format[i] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format[i] == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format[i] == 'p')

	else if (format[i] == 'd')

	else if (format[i] == 'i')

	else if (format[i] == 's')


	


}

int	ft_check_format(va_list args, const char *format)
{
	int c;
	int i = 0; // Initialize i to 0
	int count = 0;

	while (format[i])
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			count += write(1, &c, 1);
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);
			if (!str)
				str = "(null)";
			ft_putstr_fd(str, 1);
			count += ft_strlen(str);
		}
		i++;
	}

	return (count);
}
