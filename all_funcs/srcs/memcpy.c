/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:55:44 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 10:04:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *destination, const void *source, size_t n)
{
    unsigned char *dest;
    const unsigned char *src;
    size_t i;

    dest = (unsigned char *) destination;
    src = (unsigned char *) source;
    i = 0;

    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return (destination);
}