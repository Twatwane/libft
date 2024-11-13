/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:55:44 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 09:30:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *destination, const void *source, size_t n)
{
    unsigned char *dest;
    const unsigned char *src;
    size_t i;

    dest = (unsigned char *) destination;
    src = (unsigned char *) source;
    i = 0;

    if (src < dest)
    {
        i = n;
        while (i > 0)
        {
            dest[i - 1] = src[i - 1];
            i--;
        }
        return (destination);
    }

    else
    {
        while (i < n)
        {
            dest[i] = src[i];
            i++;
        }
        return (destination);
    }
}
