/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:14:31 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 10:14:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int memcmp(const void *ptr1, const void *ptr2, size_t n)
{
    unsigned char *p1;
    unsigned char *p2;
    size_t i;

    p1 = (unsigned char *) ptr1;
    p2 = (unsigned char *) ptr2;
    i = 0;
    while ((i < n) && (p1[i] == p2[i]))
        i++;
    return (p1[i] - p2[i]);
}