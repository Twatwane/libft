# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 02:22:30 by ajosse            #+#    #+#              #
#    Updated: 2024/11/13 12:14:49 by ajosse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = isalpha isdigit isalnum isascii isprint strlen memset bzero memcpy memmove strlcpy strlcat toupper tolower strchr strrchr strncmp memchr memcmp strnstr atoi calloc strdup substr strjoin strtrim split itoa strmapi striteri putchar_fd putstr_fd putendl_fd putnbr_fd is_in strncpy strstr strrev strcat strcpy

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

all: libft.a

libft.a: $(FILES)
	ar -rsc libft.a $(FILES:%=srcs/%.o)

$(FILES): 
	$(CC) -c $(CCFLAGS) srcs/$@.c -I includes/ -o srcs/$@.o

clean:
	rm -f $(FILES:%=srcs/%.o)

fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: all clean fclean re
