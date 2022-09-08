/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:59:42 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/08 18:03:33 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_find_power(int nb);
int		ft_find_divider(int count);
void	print_digit(int a);
void	ft_putnbr(int nb);

int	ft_find_power(int nb)
{
	int	count;

	count = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

int	ft_find_divider(int count)
{
	int	divider;

	divider = 1;
	while (count > 1)
	{
		divider *= 10;
		count--;
	}
	return (divider);
}

void	print_digit(int a)
{
	char	digit_to_print;

	digit_to_print = a + 48;
	write(1, &digit_to_print, 1);
}

void	ft_putnbr(int nb)
{
	int	power;
	int	divider;
	int	a;

	power = ft_find_power(nb);
	divider = ft_find_divider(power);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb *= (-1);
			write(1, "-", 1);
		}
		while (divider >= 1)
		{
			a = nb / divider;
			nb = nb - (a * divider);
			print_digit(a);
			divider /= 10;
		}
	}
}
/*
int main(void)
{
	int i = -10;
	
	while (i < 21)
	{
		ft_putnbr(i);
		i += 1;
	}
	return (0);
}*/
