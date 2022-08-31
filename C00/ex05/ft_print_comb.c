/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:46:43 by fcoindre          #+#    #+#             */
/*   Updated: 2022/08/31 17:37:37 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_comb(void);
void	ft_print_separator(char n0, char n1, char n2);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_separator(char n0, char n1, char n2)
{
	if (!(n0 == '7' && n1 == '8' && n2 == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	n0;
	char	n1;
	char	n2;

	n0 = '0';
	while (n0 <= '7')
	{
		n1 = n0 + 1;
		while (n1 <= '8')
		{
			n2 = n1 + 1;
			while (n2 <= '9')
			{
				ft_putchar (n0);
				ft_putchar (n1);
				ft_putchar (n2);
				ft_print_separator (n0, n1, n2);
				n2++;
			}
			n1++;
		}
		n0++;
	}
}
