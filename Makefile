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

NAME = ft_printf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -pedantic -g

AR = ar rcs
RM = rm -rf

LIBFT_DIR = ./libft
LIBFT_A = $(LIBFT_DIR)/libft.a
LIBFT_INC = $(LIBFT_DIR)

UTILS = ft_printf_utils.c ft_printf_utils_hex.c
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
	$(CC) $(CFLAGS) -I . -I $(LIBFT_INC) -c $< -o $@

clean:
	$(RM) $(OBJS)

re: clean all
