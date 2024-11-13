/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:12:32 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/13 10:52:27 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char *str, char *charset)
{
	int	i;
	int j;
	int wd_count;
	char **result;
	
	i = ((j = ((wd_count = 0))));
	while(str[i])
	{
		while (is_in(charset, str[i]) == 1 && str[i])
		{
			str[i] = '\0';
			i++;
		}
		if (!(str[i]))
			wd_count--;
		wd_count++;
		while ((is_in(charset, str[i]) == 0) && str[i])
		{
			i++;
		}
	}
	result = (char **) malloc((wd_count + 1) * sizeof(char *));
	while (*str == '\0' && wd_count > 0)
		str++;
	while (j < wd_count)
	{
		result[j] = ft_strdup(str);
		
		while ((is_in(charset, *str) == 0) && (*str != '\0'))
			str++;
			
		while (*str == '\0' && j + 1 < wd_count)
			str++;

		j++;
	}
	result[j] = NULL;
	return result;
}
