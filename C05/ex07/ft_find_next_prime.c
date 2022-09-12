/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:55:22 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/12 11:09:43 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_is_prime(int nb)
{
	int	divider;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	divider = 2;
	while (divider <= (nb / divider))
	{
		if (nb % divider == 0)
			return (0);
		divider++;
	}
	return (1);
}

int	find_next_prime(int nb)
{
	nb = nb + 1;
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
/*
int main ()
{
	printf("-4 > %d\n", find_next_prime(-4));
	printf("0 > %d\n", find_next_prime(0));
	printf("1 > %d\n", find_next_prime(1));
	printf("2 > %d\n", find_next_prime(2));
	printf("3 > %d\n", find_next_prime(3));
	printf("4 > %d\n", find_next_prime(4));
	printf("11 > %d\n", find_next_prime(11));
	printf("908 > %d\n", find_next_prime(908));
	printf("1000000000 > %d\n", find_next_prime(1000000000));
	printf("1100000000 > %d\n", find_next_prime(1100000000));
	printf("1000002000 > %d\n", find_next_prime(1000002000));
	printf("1000900000 > %d\n", find_next_prime(1000900000));
	printf("2000000000 > %d\n", find_next_prime(2000000000));
	printf("INT_MAX-1 > %d\n", find_next_prime(2147483646));

}*/
