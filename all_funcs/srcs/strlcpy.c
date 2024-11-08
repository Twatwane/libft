/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:53:24 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/08 12:10:37 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlenpos(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	rt;

	rt = (ft_strlenpos(src));
	i = 0;
	n = ft_strlenpos(dest);
	if (size == 0)
		return (ft_strlenpos(src));
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (rt);
}
/*
#include <bsd/string.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int c, char **v)
{
	(void) c;
	char *dest = v[1];
	char *src  = v[2];
	unsigned int size = atoi(v[3]);
	unsigned int my_result;
	
	char *dest2 = strdup(v[1]);
	char *src2  = strdup(v[2]);
	unsigned int size2 = atoi(v[3]);
	unsigned int off_result;

	off_result = strlcpy(dest2, src2, size2);
	printf("\nofficial :\nreturn value : %i\ndest : %s\n\n", off_result, dest2);
	
	my_result = ft_strlcpy(dest, src, size);
	printf("me :\nreturn value : %i\ndest : %s\n\n", my_result, dest);

	return 0;
}*/
