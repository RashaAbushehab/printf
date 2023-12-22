/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu--sh <rabu--sh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:02:58 by rabu--sh          #+#    #+#             */
/*   Updated: 2023/11/10 15:02:58 by rabu--sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count(int n)
{
	unsigned int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		digit += 1;
	while (n != 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

static void	itoa_helper(unsigned int number, char *result, int i)
{
	while (number != 0)
	{
		result[i] = (number % 10) + '0';
		number = number / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char			*result;
	unsigned int	digit_count;
	unsigned int	number;
	int				i;

	digit_count = count(n);
	result = (char *)malloc(sizeof(char) * (digit_count + 1));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		result[0] = '0';
	result[digit_count] = '\0';
	i = digit_count - 1;
	itoa_helper(number, result, i);
	return (result);
}

// int main(void)
// {
//     char *result;
//     result = ft_itoa(47483648);
//     printf("%s", result);
//     free(result);
//     return(0);
// }