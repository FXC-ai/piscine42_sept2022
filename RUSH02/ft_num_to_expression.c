/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_to_expression.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:48:36 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/18 13:42:52 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	display_nbr(int nbr, t_num_expression *tab)
{
	int	i;

	i = 0;
	while (tab[i].num != (-1))
	{
		if (tab[i].num == nbr)
		{
			ft_putstr(tab[i].expression);
		}
		i++;
	}
}

void	ft_give_nbr(int divider, int nbr, t_num_expression *tab)
{
	int	digit;

	ft_num_to_expression((nbr / divider), tab);
	write (1, " ", 1);
	display_nbr(divider, tab);
	digit = nbr - ((nbr / divider) * divider);
	if (digit != 0)
	{
		write (1, " ", 1);
		ft_num_to_expression(digit, tab);
	}	
}

void	ft_num_to_expression(int nbr, t_num_expression *tab)
{
	int	digit;

	if (nbr < 20)
		display_nbr (nbr, tab);
	digit = 0;
	if (nbr >= 20 && nbr < 100)
	{
		digit = nbr - (nbr % 10);
		display_nbr(digit, tab);
		digit = nbr % 10;
		if (digit != 0)
		{
			write (1, " ", 1);
			display_nbr(digit, tab);
		}
	}
	if (nbr >= 100 && nbr < 1000)
		ft_give_nbr(100, nbr, tab);
	if (nbr >= 1000 && nbr < 1000000)
		ft_give_nbr(1000, nbr, tab);
	if (nbr >= 1000000 && nbr < 1000000000)
		ft_give_nbr(1000000, nbr, tab);
	if (nbr >= 1000000000)
		ft_give_nbr(1000000000, nbr, tab);
}
