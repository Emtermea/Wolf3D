# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/03 13:52:30 by emtermea          #+#    #+#              #
#    Updated: 2015/01/27 15:04:42 by emtermea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = wolf3d

INCLUDE = wolf3d.h

SRC = wolf3d.c ft_init_pos.c ft_key_code.c ft_hook.c ft_color.c ft_side.c

FLAGS = -Wall -Werror -Wextra -g

CC = gcc

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

%.o:%.c
	@$(CC) -c $(FLAGS) $^ -I libft/Includes -I /opt/X11/include -L/usr/X11/lib -lmlx -lXext -lX11

$(NAME): $(OBJ)
	@make -C libft/ fclean
	@make -C libft/
	@$(CC) -o $(NAME) $(OBJ) -L/usr/X11/lib -lmlx -lXext -lX11 -L libft/ -lft

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
