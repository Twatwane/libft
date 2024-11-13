/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:55:44 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 09:30:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *ptr, int value, size_t num)
{
	unsigned char	*memptr;
	size_t			i;

	memptr = (unsigned char *) ptr;
	i = 0;
	while ((memptr[i] != value) && (i < num))
		i++;
	if (i == num)
		return (NULL);
	return (&memptr[i]);
}
