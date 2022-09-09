/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 10:30:50 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/09 10:41:27 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	
	return nb * ft_recursive_power(nb, (power-1));

}

int main ()
{
	int r = ft_recursive_power(4,3);

	printf("r = %d",r);

	return 0;
}
