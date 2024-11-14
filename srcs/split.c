/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:07:02 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/14 15:24:25 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**copy_strings(int k, char *copy, int length)
{
	int		i;
	char	**result;

	result = NULL;
	i = -1;
	k += 3;
	while (length--, copy[0] == '\0' && length > 0)
		copy++;
	result = (char **) malloc(k * sizeof(char *));
	while (i++, k--, k > 0)
	{
		(*result) = (char *) malloc(ft_strlen(copy) + 1 * sizeof(char));
		ft_strcpy((*result), copy);
		if (ft_strncmp(copy, "\0", 1) == 0)
			*result = NULL;
		if (k > 1)
			copy += ft_strlen(copy) + 1;
		while (copy[0] == '\0' && k > 1)
			copy++;
		result++;
	}
	(*result) = NULL;
	while (i--, i >= 0)
		result--;
	return (result);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		k;
	char	*copy;

	i = ((k = -1));
	copy = malloc(ft_strlen(str) + 1 * sizeof(char));
	ft_strcpy(copy, (char *) str);
	while (i++, str[i])
	{
		if (copy[i] == c)
		{
			copy[i] = '\0';
			if (i != 0 && copy[i - 1] != '\0')
				k++;
			if (str[i + 1] == '\0')
				k--;
		}
	}
	return (copy_strings(k, copy, ft_strlen(str)));
}
