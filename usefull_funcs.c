int ft_strlen(char *str)
{
    int    counter;

    counter = 0;
    while (str[counter] != '\0')
    {
        counter++;
    }
    return (counter);
}

int    is_base_valid(char *base)
{
    int    i;
    int    j;

    if (ft_strlen(base) <= 1)
        return (1);
    i = 0;
    j = 0;
    while (base[i])
    {
        j = i + 1;
        while (base[j])
        {
            if (base[j] == base[i] || base[j] == '-' || base[j] == '+' )
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

char*    ft_putnbr_valid_base(int index, long int nbr, char *base, char *result)
{
    char    converted;
    int i;

    i = 0;
    while (result[i])
        i++;
    if (nbr > 0)
    {
        ft_putnbr_valid_base(index + 1, nbr / ft_strlen(base), base, result);
        converted = (nbr % ft_strlen(base) + 48);
        result[index] = converted;
        return (result);
    }
    else
        result[index] = '\0';
}

char*    ft_putnbr_base(int nbr, char *base)
{
    long int    nb;
    int temp;
    char *result;
    int index;
    
    index = 0;
    result = malloc( 10 * sizeof(char));
    result[0] = '\0';
    nb = nbr;
    if (is_base_valid(base) == 0)
        return result;
    if (nb == 0)
    {
        result[0] = base[0];
        return result;
    }
    if (nb < 0)
    {
        result[0] = '-';
        nb *= -1;
        index = 1;
    }
    result[1] = '\0';
    return (ft_putnbr_valid_base(index, nb, base, result));
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (sign * result);
}

void *int_to_string(int nb, int base_int, char* dest)
{
    int copy = nb;
    int size = 0;
    while (copy > 0)
    {
      copy /= 10;
      size++;
    }
    if (nb > 0)
    {
        dest[size-1] = nb % 10 + 48;
        int_to_string(nb / 10, base_int, dest);
    }
    else
    {
      while (base_int > 0)
      {
        base_int /= 10;
        size++;
      }
      dest[size] = '\0';
    }
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power < 1)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int conv_to_base_10(char *nbr, char *base_from)
{
    int i;
    int result;
    int nb_rank_in_base;

    result = 0;
    i = 0;
    while (nbr[i])
    {
        nb_rank_in_base = -1;
        while (nb_rank_in_base < ft_strlen(base_from))
        {
            if (nbr[i] == base_from[nb_rank_in_base])
                break ;
            nb_rank_in_base++;
        }
        result += nb_rank_in_base * ft_recursive_power(ft_strlen(base_from), ft_strlen(nbr) - i - 1);
        i++;
    }
    return (result);
}

char    *ft_strstr(char *str, char *to_find)
{
    int        j;
    char*   new_ptr;
    
    new_ptr = &*str;
    j = 0;
    if (to_find[j] == '\0')
        return (str);
    while (new_ptr[0] != '\0')
    {
        if (new_ptr[0] == to_find[j])
        {
            while (new_ptr[0] == to_find[j] && to_find[j])
            {
                j++;
                new_ptr++;
            }
            if (to_find[j] == '\0')
                return (new_ptr - j);
        }
        j = 0;
        new_ptr++;
    }
    return (NULL);
}

int     is_space(char c)
{
    if ((9 <= c && c <= 13) || c == 32)
        return (1);
    return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_rev_tab(char *tab, int size)
{
	int	counter;
	char	c1;
	char	c2;

	counter = 0;
	while (counter < size / 2)
	{
		c1 = tab[counter];
		c2 = tab[size - counter - 1];
		tab[size - 1 - counter] = c1;
		tab[counter] = c2;
		counter++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0' )
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	i = -1;
	ptr = malloc((ft_strlen(src) + 1) * sizeof(char));
    if (ptr == NULL)
        return (NULL);
	while (i++, src[i])
		ptr[i] = src[i];
	ptr[i] = '\0';
	return (ptr);
}

void	ft_putnbr(int nb)
{
    char    c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 0 && nb < 10)
	{
        c = nb + '0';
        write(1, &c, 1);
    }
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}


