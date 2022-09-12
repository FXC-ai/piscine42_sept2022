/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:33:18 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/12 09:33:13 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
int main()
{
	printf("Pour 0  = %d\n", ft_iterative_factorial(0));
	printf("Pour 1  = %d\n", ft_iterative_factorial(1));
	printf("Pour 2  = %d\n", ft_iterative_factorial(2));
	printf("Pour 3  = %d\n", ft_iterative_factorial(3));
	printf("Pour 4  = %d\n", ft_iterative_factorial(4));
	printf("Pour 12  = %d\n", ft_iterative_factorial(12));
	printf("Pour -1  = %d\n", ft_iterative_factorial(-1));
	printf("Pour -7  = %d\n", ft_iterative_factorial(-7));
	printf("Pour -12  = %d\n", ft_iterative_factorial(-12));

	return 0;	
}*/
