/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:53:24 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/13 10:55:47 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlenpos(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	rt;

	rt = (ft_strlenpos(src));
	i = 0;
	n = ft_strlenpos(dest);
	if (size == 0)
		return (ft_strlenpos(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (rt);
}
