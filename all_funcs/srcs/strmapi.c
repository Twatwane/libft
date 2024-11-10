/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:53:50 by marvin            #+#    #+#             */
/*   Updated: 2024/11/10 10:53:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *buffer;
    int n;
    int i;

    if (!s || !f)
        return (NULL);
    i = 0;
    n = ft_strlen(s);
    buffer = malloc((n + 1) * sizeof(char));
    if (!buffer)
        return (NULL);
    while (s[i])
    {
        buffer[i] = f(i, s[i]);
        i++;
    }
    buffer[i] = '\0';
    return (buffer);
}


