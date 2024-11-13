/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:12:32 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/13 12:22:27 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*byte_ptr;
	unsigned char	trunc_value;
	size_t			i;

	byte_ptr = (unsigned char *) ptr;
	trunc_value = (unsigned char) value;
	i = 0;
	while (i < num)
	{
		*byte_ptr = trunc_value;
		byte_ptr++;
		i++;
	}
}
