/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:12:32 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/08 13:25:19 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void bzero(void *ptr, size_t len)
{
    unsigned char *byte_ptr;
    size_t i;

    byte_ptr = (unsigned char *) ptr;
    i = 0;
    while (i < len)
    {
        *byte_ptr = 0;
        byte_ptr++;
        i++;
    }
}