/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:30:29 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/12/29 16:30:29 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len += ft_putchar('0');
	if (n == -2147483648)
	{
		len += ft_putstr("-2147483648");
	}
	if (n < 0)
	{
		len += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		len += ft_putnbr(n / 10);
		len += ft_putnbr(n % 10);
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}

// int	ft_putnbr(int n)
// {
// 	int		len;
// 	char	*str;

// 	str = ft_itoa(n);
// 	len = ft_putstr(str);
// 	return (len);
// }

int main()
{
	int n = -1456;
	int len = ft_putnbr(n);
	printf("%d\n", len);
}