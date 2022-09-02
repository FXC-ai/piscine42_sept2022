/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:59:42 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/01 13:18:54 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
//#define INT_MIN -2147483648
//define INT_MAX 2147483647

int ft_find_power (int nb)
{
	int	count;

	count = 0;
	while(nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return count;
}

int ft_find_divider (int count)
{
	int divider;

	divider = 1;
	while (count > 0)
	{
		divider *= 10;
		count--;
	}

	return divider;

}

/*
void	ft_putnbr(int nb)
{
	int	digit;
	//char digit_c;
	int is_negativ;
	int	divider;

	is_negativ = 0;

	if (nb < 0)
	{
		nb = nb * (-1);
		is_negativ = 1;
		write (1, "-", 1);
	}
	
	divider = ft_find_divider(nb);
	printf("divider = %d\n", divider);

	while (divider != 1)
	{
		digit = nb / divider;
		printf("%d", digit);
		nb = nb % divider;
		divider /= 10;
	}
}*/

int main(void)
{
	//ft_putnbr(1234);
	//int r = 1234 / 1000;
	int count = ft_find_power(1234);
	int divider = ft_find_divider(count);


	printf("r = %d\n",r);
	return (0);
}
