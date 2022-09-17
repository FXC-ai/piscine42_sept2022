/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:01:06 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/17 20:44:57 by fcoindre         ###   ########.fr       */
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

int ft_divider (int nbr)
{
	int divider = 1;
	while (nbr != 0)
	{
		divider *= 10;
		nbr = nbr / 10;
	}
	return (divider / 10);
}

void	display_nbr(int nbr, t_num_expression *tab)
{
	int i;

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


void	ft_num_to_expression(int nbr, t_num_expression *tab)
{
	//int nbr_copy = nbr;


	int i = 0;
	int	divider = 1;
	int digit = 0;

	if (nbr < 20)
	{
		while (tab[i].num != (-1))
		{
			if (tab[i].num == nbr)
			{
				ft_putstr(tab[i].expression);
			}
			i++;
		}
	}

	if (nbr >= 20 && nbr < 100)
	{
		digit = nbr - (nbr % 10);
		display_nbr(digit, tab);
		digit = nbr % 10;
		if (digit != 0)
		{
			write (1," ",1);
			display_nbr(digit, tab);	
		}
	}

	if (nbr >= 100 && nbr <10000)
	{
		divider = ft_divider(nbr);
		while (nbr >= 100)
		{
			digit = nbr / divider;
			display_nbr(digit, tab);
			write(1," ",1);
			display_nbr (divider, tab);	
			write (1, " ",1);
			nbr = nbr - (digit * divider);
			divider = divider / 10;
		}
		if (nbr != 0)
		{
			ft_num_to_expression(nbr, tab);
		}
	}

	if (nbr >= 10000 && nbr <100000)
	{
		divider = 1000;
		ft_num_to_expression((nbr / divider), tab);

	}

}





int main (int argc, char *argv[])
{
	t_num_expression	*tab;
	char *dict = ft_read_dictionnary(1000, "numbers.dict");
	tab = ft_num_strs_to_tab(dict);

	//printf("expression = %s\n", tab[0].expression);
	//int i = 0;

	/*	
	while (tab[i].num != -1)
	{
		printf("num = %d -- ", tab[i].num);
		printf("expression = %s\n", tab[i].expression);
		i++;
	}*/
	
	int nbr = ft_validarg(argc, argv);

	//printf("BRAVO CHRISTINA : %p\n", tab);

	ft_num_to_expression(nbr, tab);

	

	return 0;
}
