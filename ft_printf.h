/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:38:13 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/12/29 21:38:13 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <string.h>

char	*ft_itoa(int n);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *str);
int		ft_printf(const char *format, ...);
int		ft_check_format(va_list args, const char *format);
int		ft_puthex(unsigned int n, const char *str);
int		ft_putptr(unsigned long long n);
#endif