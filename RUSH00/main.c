/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:33:14 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/03 20:23:02 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define CORNER_TLBR '/'
#define WALL '*'
#define CORNER_TRBL '\\'

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush_XY_inf_2 (int x, int y)
{
	if (x == 0 || y == 0)
	{
		ft_putchar(' ');
	}

	if (x == 1 && y == 1)
	{
		ft_putchar(CORNER_TLBR);
	}
}

void	rush(int x, int y)
{
	int		nbr_c;
	int		ind_x;
	int		ind_y;
	int		nbr_c_max;

	nbr_c = 0;
	ind_x = 0;
	ind_y = 0;
	nbr_c_max = x * y;

	if (x < 0)
		x *= -1;
	if (y < 0)
		y *= -1;

	if (x == 0 || y == 0)
		rush_XY_inf_2 (x,y);

	if (x == 1 && y == 1)
		rush_XY_inf_2 (x, y);

	if (x == 1 && nbr_c_max > 1)
	{
		ft_putchar(CORNER_TLBR);
		ft_putchar('\n');
		while (y > 2)
		{
			ft_putchar (WALL);
			ft_putchar('\n');
			y--;
		}
		ft_putchar(CORNER_TRBL);
	}

	if (y == 1 && nbr_c_max > 1)
	{
		ft_putchar(CORNER_TLBR);
		while (x > 2)
		{
			ft_putchar(WALL);
			x--;
		}
		ft_putchar(CORNER_TRBL);
	}

	if (nbr_c_max >= 4)
	{
		while (nbr_c < nbr_c_max)
		{
			ind_x = nbr_c % x;
			ind_y = nbr_c / x;
			if (ind_x == 0 && ind_y == 0)
				ft_putchar(CORNER_TLBR);
			if (ind_x == (x - 1) && ind_y == (y - 1))
				ft_putchar(CORNER_TLBR);
			if (ind_x == (x - 1) && ind_y == 0)
			{
				ft_putchar(CORNER_TRBL);
				ft_putchar('\n');
			}
			if (ind_x == 0 && ind_y == (y - 1))
				ft_putchar(CORNER_TRBL);
			if ((ind_x > 0 && ind_x < (x - 1)) && ind_y == 0)
				ft_putchar(WALL);
			if ((ind_x > 0 && ind_x < (x - 1)) && ind_y == (y - 1))
				ft_putchar(WALL);
			if (ind_x == 0 && (ind_y > 0 && ind_y < (y - 1)))
				ft_putchar(WALL);
			if (ind_x == (x - 1) && (ind_y > 0 && ind_y < (y - 1)))
			{
				ft_putchar(WALL);
				ft_putchar('\n');
			}
			if ((ind_x > 0 && ind_x < (x - 1))
				&& (ind_y > 0 && ind_y < (y - 1)))
			{
				ft_putchar(' ');
			}
			nbr_c++;
		}
	}
}

int	main(void)
{
	rush (4, 3);
	return (0);
}
