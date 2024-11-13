/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:00:08 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/13 12:01:18 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *destination, const void *source, size_t n)
{
	unsigned char			*dest;
	const unsigned char		*src;
	size_t					i;

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
		while (i++, i < n)
			dest[i - 1] = src[i - 1];
		return (destination);
	}
}
