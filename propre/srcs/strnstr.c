/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:12:32 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/13 13:10:32 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int			j;
	int			i;
	int			n;
	const char	*new_ptr;

	n = (int) len;
	new_ptr = str;
	j = ((i = -1));
	if (to_find[j] == '\0')
		return (str);
	while (i++, (new_ptr[0] != '\0') && (i < n))
	{
		if (new_ptr[0] == to_find[j])
		{
			while (j++, new_ptr[0] == to_find[j] && to_find[j])
				new_ptr++;
			if (to_find[j] == '\0')
				return (new_ptr - j);
		}
		j = -1;
		new_ptr++;
	}
	return (NULL);
}
