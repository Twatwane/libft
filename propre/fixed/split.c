/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:07:02 by ajosse            #+#    #+#             */
/*   Updated: 2024/10/03 23:46:23 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**copy_strings(int k, char *copy, int length)
{
	int		i;
	char	*anti_error;
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
		if (k > 1)
			copy += ft_strlen(copy) + 1;
		while (copy[0] == '\0' && k > 1)
			copy++;
		anti_error = *result++;
	}
	(*result) = NULL;
	while (i--, i >= 0)
		anti_error = *result--;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	*copy;

	i = ((j = ((k = -1))));
	copy = malloc(ft_strlen(str) + 1 * sizeof(char));
	ft_strcpy(copy, str);
	while (i++, str[i])
	{
		j = -1;
		while (j++, charset[j])
		{
			if (copy[i] == charset[j])
			{
				copy[i] = '\0';
				if (i != 0 && copy[i - 1] != '\0')
					k++;
				if (str[i + 1] == '\0')
					k--;
			}
		}
	}
	return (copy_strings(k, copy, ft_strlen(str)));
}
/*
int    main(int argc, char **argv)
{
    (void) argc;
    
    char *ptr_to_char1 = "hello hola zzz";
    char *separ = " ";
    
    char **result;

    result = ft_split(ptr_to_char1, separ);

    return (0);
}*/
