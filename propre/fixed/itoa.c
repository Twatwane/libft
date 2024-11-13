/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:19:55 by marvin            #+#    #+#             */
/*   Updated: 2024/11/09 15:19:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int n)
{
	char		*buffer;
	long int	i;

	n = (long int) n;
	if (n == 0)
		return (ft_strdup("0"));
	buffer = ft_calloc(12, sizeof(char));
	i = 0;
	if (n < 0)
	{
		buffer[0] = '-';
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		buffer[i] = n % 10 + 48;
		n /= 10;
		i++;
	}
	buffer[i] = '\0';
	ft_strrev(buffer);
	return (buffer);
}
