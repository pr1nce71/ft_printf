# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 17:12:53 by yevkahar          #+#    #+#              #
#    Updated: 2024/12/02 17:18:56 by yevkahar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   ft_printf.a
SRCS	=	ft_printf.c \
			






























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