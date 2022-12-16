# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: areifoun <areifoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 00:37:19 by areifoun          #+#    #+#              #
#    Updated: 2022/12/15 13:40:18 by areifoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc 
AR = ar rc
RM = rm -f 
FLG = -Wall -Wextra -Werror
SRC = ft_putnbr_u.c  \
	ft_putnbr.c	     \
	ft_putchar.c     \
	ft_putstr.c      \
	ft_puthex.c		 \
	ft_puthex_u.c	 \
	ft_puthex_ad.c	 \
	ft_printf.c      
	
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)
	
%.o : %.c ft_printf.h
	$(CC) $(FLG) $< -o $@ -c

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean