/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:07:19 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/13 12:52:00 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int				ft_atoi(char *str);
void			bzero(void *ptr, size_t len);
void			*ft_calloc(size_t nitems, size_t size);
int				is_in(const char *str, char c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
void			*memchr(const void *ptr, int value, size_t num);
int				memcmp(const void *ptr1, const void *ptr2, size_t n);
void			*ft_memcpy(void *destination, const void *source, size_t n);
void			*memmove(void *destination, const void *source, size_t n);
void			ft_memset(void *ptr, int value, size_t num);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *str, int fd);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putstr_fd(char *str, int fd);
char			**ft_split(char *str, char *charset);
char			*ft_strcat(char *dest, char *src);
char			*strchr(const char *str, int c);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(int size, char **strs, char *sep);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t			ft_strlen(const char *str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(char *s1, char *s2, unsigned int n);
void			ft_strncpy(char *dest, const char *src, int size);
const char		*strnstr(const char *str, const char *to_find, size_t len);
char			*strrchr(const char *str, int c);;
void			ft_strrev(char *str);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_topupper(int c);

#endif
