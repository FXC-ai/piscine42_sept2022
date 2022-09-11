/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:56:48 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/11 16:51:59 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_is_prime(int nb)
{
	int	divider;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	divider = 2;
	while (divider < ((nb + 3) / 2))
	{
		if (nb % divider == 0)
		{
			return (0);
		}
		divider++;
	}
	return (1);
}
/*
int main ()
{

	int test = 0;
	printf("Pour INT_MAX 2147483647 : %d\n", ft_is_prime(2147483647));


	while (test < 1000)
	{
		if (ft_is_prime(test) == 1)
		{
			printf("%d is prime.\n", test);
		}
		test++;
	}
}*/
