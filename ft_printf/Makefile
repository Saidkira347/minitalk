# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 13:26:48 by souhanat          #+#    #+#              #
#    Updated: 2022/10/26 11:34:50 by souhanat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_printaddr.c ft_putsign.c ft_hexadecimalmaj.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

%.o: %.c
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all