/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:53:00 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/07 19:55:53 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int ind;
	int	is_negativ;
	int	tab[11];

	ind = 0;
	is_negativ = 1;
	i = 0;
	while (str[i] == ' ') //isspace(3) !!!!!
	{
		i++;
	}

	while (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			is_negativ *= -1;
		}
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		tab[ind] = str[i] - 48;
		i++;
		ind++;
	}

	ind--;
	while (ind >= 0)
	{
		printf("tab[%d] = %d ", ind, tab[ind]);
		ind--;
	}

	return 0;
}

int main ()
{
	char *input = "   ---+--+1234ab567";

	ft_atoi(input);


	return 0;
}
