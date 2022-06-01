# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tanukool <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 14:58:23 by tanukool          #+#    #+#              #
#    Updated: 2022/06/01 19:16:44 by tanukool         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS= -Wall -Werror -Wextra

NAME = libft.a

SRCS = ft_strncmp.c ft_strrchr.c ft_strchr.c ft_memmove.c ft_memcpy.c ft_bzero.c ft_memset.c ft_tolower.c ft_toupper.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_strlen.c

OBJS = $(patsubst %.c, %.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean
