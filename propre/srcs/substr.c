/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:59:26 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 10:59:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *new;
    size_t i;

    i = 0;
    new = malloc(len + 1);
    if (new == NULL)
        return (NULL);

    while (i < len)
    {
        new[i] = s[start + i];
        i++;
    }
    new[i] = '\0';
    return (new);
}