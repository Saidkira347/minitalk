# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souhanat <souhanat@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 01:31:53 by souhanat          #+#    #+#              #
#    Updated: 2022/12/23 17:52:45 by souhanat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME = minitalk.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

CLIENT = client
SERVER = server

#Sources:
SRC_S = server.c 
SRC_C = client.c 

OBJ_S = $(SRC_S:%.c=%.o)
OBJ_C = $(SRC_C:%.c=%.o)

#Rules:
all: $(SERVER) $(CLIENT)

printf: 
	make -C ft_printf

$(NAME): all

$(SERVER):
		@$(CC) $(SRC_S) $(CFLAGS) ft_printf/libftprintf.a -o $(SERVER) 
		
$(CLIENT):
		@$(CC) $(SRC_C) $(CFLAGS) ft_printf/libftprintf.a -o $(CLIENT)

clean:
		@$(RM) $(OBJ_S)
		@$(RM) $(OBJ_C)

fclean: clean
		@$(RM) $(SERVER)
		@$(RM) $(CLIENT)
		@$(RM) $(NAME)

re: fclean all
