/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:19:55 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 15:50:05 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fill_buffer(char *buffer, int i, int n)
{
	while (n > 0)
	{
		buffer[i] = n % 10 + 48;
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*buffer;
	long int	i;
	int			is_negative;

	n = (long int) n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	buffer = ft_calloc(12, sizeof(char));
	i = ((is_negative = 0));
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	i = fill_buffer(buffer, i, n);
	if (is_negative)
	{
		buffer[i] = '-';
		i++;
	}
	buffer[i] = '\0';
	ft_strrev(buffer);
	return (buffer);
}
