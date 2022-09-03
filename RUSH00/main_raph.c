

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragrana <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:21:48 by ragrana           #+#    #+#             */
/*   Updated: 2022/09/03 13:29:35 by ragrana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int j;

	i = 1;
	j = 1;
	if (x == 0 || y == 0)
		ft_putchar(' ');
	else
	{
		ft_putchar('/');
	while (i <= x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x > 1)
		ft_putchar('\\');
	i = 1;
	if (y > 1)
	{
		ft_putchar('\n');
		if (y > 2)
			ft_putchar('*');
		while (i <= y - 2)
		{
			while (j <= x - 2)
			{
				ft_putchar(' ');
				j++;
			}
			j = 1;
			if (i != y - 2)
			{
				if (x != 1)
				{
					ft_putchar('*');
				}
				ft_putchar('\n');
				ft_putchar('*');
			}
			else
			{
				if (x != 1)
				{
					ft_putchar('*');
				}
				ft_putchar('\n');
			}
			i++;
		}
	}
	i = 1;
	if(y > 1)
	{
		ft_putchar('\\');
		while (i <= x - 2)
		{
			ft_putchar('*');
			i++;
		}
		if (x > 1)
			ft_putchar('/');
	}
	}


}







int	main() 
{
	rush(10,50);
	return (0); 
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
