#include "ft_printf.h"

static int ft_printptr(unsigned long long n)
{
    int count;
    
    count = 0;
	if (n >= 16)
	{
		count += ft_printptr(n / 16);
		count += ft_printptr(n % 16);
	}
	else
	{
		if (n <= 9)
			count += ft_putchar(n + 48);
		else
			count += ft_putchar(n - 10 + 'a');
	}
	return ((count));
}


int	ft_putptr(unsigned long long n)
{
	int		len;

	len = 0;
	if (n == 0)
		return (len += write (1, "(nil)", 5));
	len += write (1, "0x", 2);
	len += ft_printptr(n);
	return (len);
}