# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icezar-s <icezar-s@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 14:03:56 by icezar-s          #+#    #+#              #
#    Updated: 2025/10/23 13:16:14 by icezar-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=cc
CFLAGS=-Wall -Wextra -Werror -pedantic -g -I .

AR=ar rcs
RM=rm -rf

SRCS=ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isalnum.c ft_strlen.c
SRCS+= ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c
SRCS+= ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c
SRCS+= ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c
SRCS+= ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_split.c
SRCS+= ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c
SRCS+= ft_putnbr_fd.c ft_putstr_fd.c ft_isprint.c ft_strtrim.c

SRCS_BONUS=ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c
SRCS_BONUS+= ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstadd_back_bonus.c
SRCS_BONUS+= ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

SRC=$(addprefix ./,$(SRCS))
SRC_BONUS=$(addprefix ./,$(SRCS_BONUS))

OBJ=$(SRC:.c=.o)
OBJ_BONUS=$(SRC_BONUS:.c=.o)

all: $(NAME) $(SRC)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

$(OBJ_BONUS): $(SRC_BONUS)
	$(CC) $(CFLAGS) -c $(SRC_BONUS)

.bonus: $(OBJ) $(OBJ_BONUS) $(SRC_BONUS)
	make all
	$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)
	@touch .bonus

bonus: .bonus

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
