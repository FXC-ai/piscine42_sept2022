/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:16:06 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/08 15:02:20 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

int	ft_check_base (char *base)
{
	int i;
	int	c;
	int len_base;


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


void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size = ft_strlen(base);
	int mod;
	int tab[30];
	int i;
	char print;
	int check_base;
	long int nbr_l;

	nbr_l = nbr;
	check_base = ft_check_base(base);
	if (check_base == 1)
	{
		i = 0;
		while (nbr_l > 10)
		{
			mod = nbr_l % base_size;
			nbr = nbr_l / base_size;
			tab[i] = mod;
			i++;
		}
		tab[i] = nbr_l;

		while (i >= 0)
		{
			print = base[tab[i]];
			write (1, &print, 1);
			i--;
		}
	}
}

int	main()
{
	char	*base = "01";
	//int	test = ft_check_base (base);
	//printf("test = %d\n",test);

	//int	base_size = ft_strlen(base);
	//printf("base_size = %d", base_size);

	ft_putnbr_base(2147483647, base);


	return 0;
}
