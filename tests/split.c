/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:07:02 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/15 14:02:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words_and_put_null(char *str, char c)
{
	int	counter;
	int	in_a_word;

	if (!str)
		return (0);
	counter = 0;
	in_a_word = 0;
	while (*str)
	{
		if (*str != c && in_a_word == 0)
		{
			in_a_word = 1;
			counter++;
		}
		else if (*str == c)
		{
			in_a_word = 0;
			*str = '\0';
		}
		str++;
	}
	return (counter);
}

static char	**fill_new(char *separated, int words)
{
	char	**new;
	int		i;

	i = -1;
	new = (char **) malloc((words + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	while (i++, i < words)
	{
		while (*separated == '\0')
			separated++;
		new[i] = ft_strdup(separated);
		if (!new[i])
		{
			while (i--)
				free(new[i]--);
			free(new);
			return (NULL);
		}
		separated += ft_strlen(separated);
	}
	new[i] = NULL;
	return (new);
}

char	**ft_split(char const *str, char c)
{
	int		words;
	char	*copy;

	copy = ft_strdup(str);
	if (!copy)
		return (NULL);
	words = count_words_and_put_null(copy, c);
	return (fill_new(copy, words));
}
