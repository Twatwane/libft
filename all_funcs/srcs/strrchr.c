/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:12:32 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/08 12:43:09 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *str, int c);
{
    int len;

    len = ft_strlen(str);
    while (len--, len > 0)
        if (str[len] == c)
            return (&str[len]);
    return (NULL);
}