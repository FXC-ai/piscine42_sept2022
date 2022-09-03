/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:33:14 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/03 15:06:21 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}	

void	rush(int x, int y)
{
	//char	corner_tlbr = '/';
	//char	corner_trbl = '\\';
	//char	star = '*';
	
	//int	i;
	//int j;

	int nbr_c;
	int	ind_x;
	int ind_y;
	int nbr_c_max;

	nbr_c = 0;
	ind_x = 0;
	ind_y = 0;
	nbr_c_max = x * y;

	while (nbr_c < nbr_c_max)
	{
		ind_x = nbr_c % x;
		ind_y = nbr_c / x;
		//printf("ind_x = %d ind_y = %d nbr_c = %d\n", ind_x, ind_y, nbr_c);
		
		if (nbr_c == 0 || nbr_c == (nbr_c_max-1))
		{
			ft_putchar('/');
		}
		
		if (ind_x == (x-1) && ind_y == 0)
		{
			ft_putchar('\\');
			ft_putchar('\n');
		}
	
		if (ind_x == 0 && ind_y == (y-1))
		{
			ft_putchar('\\');
		}

		if ((ind_x > 0 && ind_x < (x-1)) && ind_y == 0)
		{
			ft_putchar('*');
		}

		if ((ind_x > 0 && ind_x < (x-1)) && ind_y == (y-1))
		{
			ft_putchar('*');
		}

		if (ind_x == 0 && (ind_y > 0 && ind_y < (y-1)) )
		{
			ft_putchar('*');
		}

		if (ind_x == (x-1) && (ind_y > 0 && ind_y < (y-1)))
		{
			ft_putchar('*');
			ft_putchar('\n');
		}

		
		if ((ind_x > 0 && ind_x < (x-1)) && (ind_y > 0 && ind_y < (y-1)) )
		{
			ft_putchar(' ');
		}
		
		nbr_c++;
	}

	


	/*	
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
	*/
}

int	main(void)
{

	rush (5,3);
	return (0);
}
