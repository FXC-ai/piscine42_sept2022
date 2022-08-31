/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:24:21 by fcoindre          #+#    #+#             */
/*   Updated: 2022/08/31 21:07:20 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_print_nbr (void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	

	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{

				d = '0';
				while (d <= '9')
				{
					if ((a == c && b < d) || (a < c))
					{
						ft_putchar(a);
						ft_putchar(b);
						ft_putchar(' ');
						ft_putchar(c);
						ft_putchar(d);
						ft_putchar(',');
						ft_putchar(' ');
					}
					d++;
				}				
				c++;
			}	
			b++;
		}
		a++;
	}
}

void ft_print_combn (void)
{
	ft_print_nbr();
}

int main(void)
{
	ft_print_nbr();
	return (0);
}
