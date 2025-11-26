# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icezar-s <icezar-s@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 13:47:49 by icezar-s          #+#    #+#              #
#    Updated: 2025/11/26 20:32:22 by icezar-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

CC=cc
CFLAGS=-Wall -Wextra -Werror -pedantic -g

AR=ar rcs
RM=rm -rf

UTILS=ft_printf_utils.c ft_printf_utils_hex.c
SRCS=ft_printf.c

LIBFT=./libft/libft.a

UTIL=$(addprefix ./utils/,$(UTILS))
SRC=$(addprefix ./,$(SRCS))

OBJ_UTIL=$(UTIL:.c=.o)
OBJ=$(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_UTIL) $(LIBFT)
	$(AR) $(NAME) $(OBJ) $(OBJ_UTIL)

$(OBJ): %.o: %.c
	$(CC) $(CFLAGS) -I . -c $< -o $@

$(OBJ_UTIL): %.o: %.c
	$(CC) $(CFLAGS) -I ../libft/ -c $< -o $@

$(LIBFT):
	$(MAKE) -C libft 

clean:
	$(RM) $(OBJ) $(OBJ_UTIL)

fclean: clean
	$(RM) $(NAME)

re: fclean all
