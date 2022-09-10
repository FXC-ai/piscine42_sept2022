/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:00:44 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/10 11:00:08 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int main(int argc, char *argv[])
{
	printf("nbr = %d\n", argc);
	printf("nom = %s\n", argv[0]);
	int r = ft_iterative_power(42,3);

	printf("r = %d", r);

	return (0);
}
