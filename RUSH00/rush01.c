/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:33:14 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/04 11:49:43 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define CORNER_TLBR '/'
#define WALL '*'
#define CORNER_TRBL '\\'

void	ft_putchar(char c)
int	ft_absolute_value(int n)
void	rush_x_eg_1(int y)
void	rush_y_eg_1(int x)
void	rush_xy_inf_2(int x, int y, int nbr_c_max)
void	display_xy_sup_2(int x, int y, int ind_x, int ind_y)
void	rush_xy_sup_2(int x, int y, int nbr_c_max)
void	rush(int x, int y)

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_absolute_value(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	return (n);
}

void	rush_x_eg_1(int y)
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
	ft_putchar('\n');
}

void	rush_y_eg_1(int x)
{
	ft_putchar(CORNER_TLBR);
	while (x > 2)
	{
		ft_putchar(WALL);
		x--;
	}
	ft_putchar(CORNER_TRBL);
	ft_putchar('\n');
}

void	rush_xy_inf_2(int x, int y, int nbr_c_max)
{
	if (x == 0 || y == 0)
		ft_putchar('\n');
	if (x == 1 && y == 1)
	{
		ft_putchar(CORNER_TLBR);
		ft_putchar('\n');
	}
	if (x == 1 && nbr_c_max > 1)
		rush_x_eg_1(y);
	if (y == 1 && nbr_c_max > 1)
		rush_y_eg_1(x);
}

void	display_xy_sup_2(int x, int y, int ind_x, int ind_y)
{
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
		ft_putchar(' ');
}

void	rush_xy_sup_2(int x, int y, int nbr_c_max)
{
	int	ind_x;
	int	ind_y;
	int	nbr_c;

	nbr_c = 0;
	while (nbr_c < nbr_c_max)
	{
		ind_x = nbr_c % x;
		ind_y = nbr_c / x;
		display_xy_sup_2 (x, y, ind_x, ind_y);
		nbr_c++;
	}
	ft_putchar('\n');
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
	x = ft_absolute_value (x);
	y = ft_absolute_value (y);
	if (x < 2 || y < 2)
	{
		rush_xy_inf_2(x, y, nbr_c_max);
	}
	if (x >= 2 && y >= 2)
	{
		rush_xy_sup_2(x, y, nbr_c_max);
		nbr_c++;
		ft_putchar('\n');
	}
}

int	main(void)
{
	printf("5,3\n");
	rush (5, 3);
	printf("5,1\n");
	rush (5, 1);
	printf("1 ,1\n");
	rush (1, 1);
	printf("1,5\n");
	rush (1, 5);
	printf("4,4\n");
	rush (4, 4);
	return (0);
}
