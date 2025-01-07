# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 17:12:53 by yevkahar          #+#    #+#              #
#    Updated: 2025/01/07 17:01:48 by yevkahar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   ft_printf.a
SRCS	=	ft_printf.c \
			ft_putptr.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_putunbr.c \
			ft_putthexlow.c \
			ft_putthexupp.c \
			





OBJS	= $(SRCS:.c=.o)

RM		= rm -f
LIBC	= ar -rcs
FLAGS	= -Wall -Wextra -Werror
INCS	= .

.c.o :
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I$(INCS)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS) 

all: $(NAME)

clean:
	$(RM) -f $(OBJS)

fclean: clean
	$(RM) $(NAME) $(bonus)

re: fclean all