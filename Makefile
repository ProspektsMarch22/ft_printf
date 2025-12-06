# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icezar-s <icezar-s@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/06 12:45:50 by icezar-s          #+#    #+#              #
#    Updated: 2025/12/06 12:50:43 by icezar-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -pedantic -g

AR = ar rcs
RM = rm -rf

UTILS = ft_printf_utils.c ft_printf_utils_hex.c ft_putchar_fd.c ft_itoa.c ft_strlen.c
SRC = ft_printf.c

UTIL = $(addprefix ./utils/,$(UTILS))
SRCS = $(addprefix ./,$(SRCS))

OBJ_UTIL = $(UTIL:.c=.o)
OBJ = $(SRC:.c=.o)

OBJS = $(OBJ) $(OBJ_UTIL)

.PHONY = all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
