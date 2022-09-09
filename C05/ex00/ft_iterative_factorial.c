/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:33:18 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/09 09:16:59 by fcoindre         ###   ########.fr       */
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
	int r = ft_iterative_factorial(13);
	printf("r = %d", r);
	
}*/
