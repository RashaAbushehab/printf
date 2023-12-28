/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:04:36 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:04:36 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
	int len;
	char *str;

	str = ft_itoa(n);
	len = ft_putstr(str);
	return (len);
}

// void	ft_putnbr(int n)
// {
// 	if (n == 0)
// 	{
// 		ft_putchar('0');
// 		return ;
// 	}
// 	if (n == -2147483648)
// 	{
// 		ft_putstr("-2147483648");
// 		return ;
// 	}
// 	if (n < 0)
// 	{
// 		ft_putchar('-');
// 		n *= -1;
// 	}
// 	if (n >= 10)
// 	{
// 		ft_putnbr(n / 10);
// 		ft_putnbr(n % 10);
// 	}
// 	else
// 		ft_putchar(n + '0');
// }
