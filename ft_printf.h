
#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <string.h>

char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
int		ft_printf(const char *format, ...);
int	ft_putchar(char c, int *len);
int	ft_check_format(va_list args, const char *format);

#endif