# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 02:22:30 by ajosse            #+#    #+#              #
#    Updated: 2024/11/15 15:59:39 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = isalpha isdigit isalnum isascii isprint strlen memset bzero memcpy memmove strlcpy strlcat toupper tolower strchr strrchr strncmp memchr memcmp strnstr atoi calloc strdup substr strjoin strtrim split itoa strmapi striteri putchar_fd putstr_fd putendl_fd putnbr_fd is_in strncpy strstr strrev strcat strcpy

CC = cc
CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(FILES)
	ar -rsc libft.a $(FILES:%=srcs/%.o)

$(FILES): 
	$(CC) -c $(CCFLAGS) srcs/$@.c -I includes/ -o srcs/$@.o

update:
	cp ../srcs/*.c srcs
	cp ../srcs/*.c .
	cp ../includes/libft.h includes
	cp includes/libft.h .

test: update all
	cp srcs/*.o .

clean:
	rm -f $(FILES:%=srcs/%.o)

fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: all clean fclean re
