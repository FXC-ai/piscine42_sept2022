/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:33:14 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/04 11:59:02 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define CORNER_TLBR '/'
#define WALL '*'
#define CORNER_TRBL '\\'

void	ft_putchar(char c);
int		ft_absolute_value(int n);
void	rush_x_eg_1(int y);
void	rush_y_eg_1(int x);
void	rush_xy_inf_2(int x, int y, int nbr_c_max);
void	display_xy_sup_2(int x, int y, int ind_x, int ind_y);
void	rush_xy_sup_2(int x, int y, int nbr_c_max);
void	rush(int x, int y);

int	main(void)
{
	rush (5, 3);
	rush (5, 1);
	rush (1, 1);
	rush (1, 5);
	rush (4, 4);
	return (0);
}
