/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:00:44 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/11 17:43:22 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int main()
{
	printf("0 puissance 3 = %d\n",  ft_iterative_power(0,3));
	printf("0 puissance -4 = %d\n",  ft_iterative_power(0,-4));
	printf("-4 puissance 3 = %d\n",  ft_iterative_power(-4,3));
	printf("7 puissance 0 = %d\n",  ft_iterative_power(7,0));
	printf("46340 puissance 2 = %d\n",  ft_iterative_power(46340, 2));
	printf("-46340 puissance 2 = %d\n",  ft_iterative_power(-46340, 2));
	printf("-4 puissance 0 = %d\n",  ft_iterative_power(-4,0));
	printf("0 puissance 0 = %d\n",  ft_iterative_power(0,0));
	printf("463 puissance -3 = %d\n",  ft_iterative_power(463, -3));

	return (0);
}*/
