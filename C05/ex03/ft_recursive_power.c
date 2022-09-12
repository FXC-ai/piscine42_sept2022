/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:30:50 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/12 10:19:44 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power - 1)));
}
/*
int main ()
{
	printf("0 puissance 3 = %d\n",  ft_recursive_power(0,3));
	printf("0 puissance -4 = %d\n",  ft_recursive_power(0,-4));
	printf("-4 puissance 3 = %d\n",  ft_recursive_power(-4,3));
	printf("7 puissance 0 = %d\n",  ft_recursive_power(7,0));
	printf("46340 puissance 2 = %d\n",  ft_recursive_power(46340, 2));
	printf("-46340 puissance 2 = %d\n",  ft_recursive_power(-46340, 2));
	printf("-4 puissance 0 = %d\n",  ft_recursive_power(-4,0));
	printf("0 puissance 0 = %d\n",  ft_recursive_power(0,0));
	printf("463 puissance -3 = %d\n",  ft_recursive_power(463, -3));
	printf("21 puissance 7 = %d\n",  ft_recursive_power(21, 7));
	return 0;
}*/
