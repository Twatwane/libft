/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:00:08 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/13 10:52:41 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = -1;
	ptr = malloc((ft_strlen(src) + 1) * sizeof(char));
    if (ptr == NULL)
        return (NULL);
	while (i++, src[i])
		ptr[i] = src[i];
	ptr[i] = '\0';
	return (ptr);
}