/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:12:32 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/08 12:29:33 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0' ) && i < n)
	{
		if ((int) s1[i] != (int) s2[i])
		{
			return ((int) s1[i] - (int) s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main() 
{
    char string1[] = "hell ox";
    char string2[] = "hello";
    
    int base_result;
    int my_result;
    
    base_result = strcmp(string1, string2);
    my_result = ft_strcmp(string1, string2);
    
    printf("%i", base_result);
    printf("\n");
    printf("%i", my_result);
    return 0;
}*/
