/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:08:30 by ajosse            #+#    #+#             */
/*   Updated: 2024/11/13 12:04:55 by ajosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*return_empty_str(void)
{
	char	*result;

	result = ((char *)malloc(1));
	result[0] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	int			total_lenght;
	char		*result;

	if (size == 0)
		return (return_empty_str());
	i = -1;
	total_lenght = 0;
	while (i++ < size - 1)
		total_lenght += ft_strlen(strs[i]);
	total_lenght += (size - 1) * ft_strlen(sep);
	result = malloc(total_lenght + 1);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		i++;
		if (i < size)
			ft_strcat(result, sep);
	}
	return (result);
}
