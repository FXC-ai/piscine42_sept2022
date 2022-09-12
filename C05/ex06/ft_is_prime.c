/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:56:48 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/12 10:58:57 by fcoindre         ###   ########.fr       */
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
/*
int main ()
{

	int test = 1000000000;
	printf("Pour INT_MAX 2147483647 : %d\n", ft_is_prime(2147483647));
	printf("Pour -10 : %d\n", ft_is_prime(-10));
	printf("Pour 0 : %d\n", ft_is_prime(0));
	printf("Pour 1 : %d\n", ft_is_prime(1));
	printf("Pour 2 : %d\n", ft_is_prime(2));
	printf("Pour 3 : %d\n", ft_is_prime(3));
	printf("Pour 4 : %d\n", ft_is_prime(4));
	printf("Pour 5 : %d\n", ft_is_prime(5));
	printf("Pour -2147483648 : %d\n", ft_is_prime(-2147483648));
	printf("Pour 19855543 : %d\n", ft_is_prime(19855543));
	printf("Pour 19855542 : %d\n", ft_is_prime(19855542));


	while (test < 1000000060)
	{
		if (ft_is_prime(test) == 1)
		{
			printf("%d is prime.\n", test);
		}
		test++;
	}
}*/
