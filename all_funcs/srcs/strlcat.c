/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:04:18 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/08 12:09:47 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;
	unsigned int	ini_dest_lenght;

	ini_dest_lenght = ft_strlen(dest);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < ini_dest_lenght)
		return ((strlen(src) + size));
	return (strlen(src) + ini_dest_lenght);
}
/*
int main() {
    
    char chaine1[] = "dst\0          ";
    char chaine2[] = "src";
    
    // on veut  hehe\0   avec 5    par exemple
    
    char *base_result;
    unsigned int my_result;
    
    //base_result = strlcat(chaine1, chaine2);
    int i = 0;
    while ( i < 9)
    {
        //printf("%s", base_result);
        char chaine1[] = "dst\0          ";
        my_result = ft_strlcat(chaine1, chaine2, i);
        printf("\n");
        printf("%i\n",i);
        printf("%s$", chaine1);
        printf(" : ");
        printf("%i", my_result);
        i++;
    }

    return 0;
}*/
