/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_E.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:08:48 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/15 16:18:16 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

void	print_tab(int size, char *tab)
{
	while (size >= 0)
	{
		write(1, &tab[size], 1);
		size--;
	}
}

void	ft_putnbr(int nb)
{
	int		mod;
	char	tab[12];
	int		i;

	i = 0;
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		while (nb >= 10)
		{
			mod = nb % 10;
			tab [i] = mod + '0';
			i++;
			nb = nb / 10;
		}
		tab[i] = (nb + '0');
		print_tab (i, tab);
	}
}
/*
int	main()
{
	ft_putnbr(INT_MIN);
	printf("\n");
	
	int i = -21;
	int stop = i + 50;

	while (i < stop)
	{
		ft_putnbr(i);
		printf("\n");
		i++;
	}

	return (0);
}*/
