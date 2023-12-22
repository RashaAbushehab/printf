/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:04:42 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:04:42 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
	}
}

// int main(void)
// {
//     char *s = "hello"; 
//     int fd = 1;  

//     ft_putstr_fd(s, fd);

//     return (0);
// }