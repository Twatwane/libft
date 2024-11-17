# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 02:22:30 by ajosse            #+#    #+#              #
#    Updated: 2024/11/17 13:00:35 by ajosse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = isalpha isdigit isalnum isascii isprint strlen memset bzero memcpy memmove strlcpy strlcat toupper tolower strchr strrchr strncmp memchr memcmp strnstr atoi calloc strdup substr strjoin strtrim split itoa strmapi striteri putchar_fd putstr_fd putendl_fd putnbr_fd is_in strncpy strstr strrev strcat strcpy lstnew_bonus lstadd_front_bonus lstsize_bonus lstlast_bonus lstadd_back_bonus lstdelone_bonus lstclear_bonus lstiter_bonus lstmap_bonus

CC = cc
CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(FILES)
	ar -rsc libft.a $(FILES:%=libft_srcs/%.o)

$(FILES): 
	$(CC) -c $(CCFLAGS) libft_srcs/$@.c -Ilibft_includes -o libft_srcs/$@.o

clean:
	rm -f $(FILES:%=libft_srcs/%.o)

fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: all clean fclean re
