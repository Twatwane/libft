/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:04:18 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/13 10:55:36 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;
	unsigned int	ini_dest_lenght;

	ini_dest_lenght = ft_strlen(dest);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < ini_dest_lenght)
		return ((strlen(src) + size));
	return (strlen(src) + ini_dest_lenght);
}
