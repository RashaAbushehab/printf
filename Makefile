NAME = libftprintf.a

files = ft_strlen.c		\
	   ft_putstr.c		\
	   ft_putchar.c		\
	   ft_itoa.c		\
	   ft_putnbr.c		\
	   ft_putptr.c		\
	   ft_printf.c		\
	   ft_check_format.c	\
	   ft_puthex.c

OBJS = $(files:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) 
	ar -rc $(NAME) $(OBJS) 

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all
