/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 09:24:19 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/12 09:24:12 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main ()
{
	printf("Pour 0  = %d\n", ft_recursive_factorial(0));
	printf("Pour 1  = %d\n", ft_recursive_factorial(1));
	printf("Pour 2  = %d\n", ft_recursive_factorial(2));
	printf("Pour 3  = %d\n", ft_recursive_factorial(3));
	printf("Pour 4  = %d\n", ft_recursive_factorial(4));
	printf("Pour 12  = %d\n", ft_recursive_factorial(12));
	printf("Pour -1  = %d\n", ft_recursive_factorial(-1));
	printf("Pour -7  = %d\n", ft_recursive_factorial(-7));
	printf("Pour -12  = %d\n", ft_recursive_factorial(-12));
	return 0;
}*/
