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

#include "libft.h"

void* ft_calloc(size_t nitems, size_t size)
{
    void* ptr;
    
    ptr = malloc(nitems * size);
    if (ptr == NULL)
        return NULL;
    ft_memset(ptr, 0, nitems * size);
    return ptr;
}