/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:16:06 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/08 17:00:31 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

int	ft_check_base(char *base)
{
	int	i;
	int	c;
	int	len_base;

	len_base = ft_strlen(base);
	if (len_base <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		c = i;
		while (base[c] != '\0')
		{
			if (base[i] == base[c] && c != i)
				return (0);
			c++;
		}	
		i++;
	}
	return (1);
}

void	ft_display_tab(char *base, int *tab, int i)
{
	while (i >= 0)
	{
		write (1, &base[tab[i]], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int	mod;
	int	tab[30];
	int	i;

	base_size = ft_strlen(base);
	if (ft_check_base(base))
	{
		if (nbr < 0)
		{
			nbr = nbr * (-1);
			write(1, "-", 1);
		}
		i = 0;
		while (nbr > 10)
		{
			mod = nbr % base_size;
			nbr = nbr / base_size;
			tab[i] = mod;
			i++;
		}
		tab[i] = nbr;
		ft_display_tab(base, tab, i);
	}
}
/*
int	main()
{
	char	*base = "0123456789ABCDE";

	ft_putnbr_base(2881478, base);
	
	return 0;
}*/
