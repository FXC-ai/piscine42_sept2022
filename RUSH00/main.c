/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:33:14 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/03 11:49:35 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}	

void	rush(int x, int y)
{
	char	corner_tlbr = '/';
	char	corner_trbl = '\\';
	char	star = '*';
	
	int	i;
	int j;
	
	// Premiere ligne :
	i = 0;
	ft_putchar (corner_tlbr);
	while (i < (x-2))
	{
		ft_putchar(star);
		i++;	
	}
	ft_putchar (corner_trbl);
	ft_putchar ('\n');

	// Corp du rectangle :
	j = 0;
	while (j < (y-2))
	{
		i = 0;
		ft_putchar(star);
		while (i < (x-2))
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar(star);
		j++;
		ft_putchar('\n');
	}

	// Derniere ligne
	i = 0;
	ft_putchar (corner_trbl);
	while (i < (x-2))
	{
		ft_putchar(star);
		i++;	
	}
	ft_putchar (corner_tlbr);
	ft_putchar ('\n');

}

int	main(void)
{
	int x;
	int	y;

	x = 1;
	y = 5;

	rush (x,y);
}
