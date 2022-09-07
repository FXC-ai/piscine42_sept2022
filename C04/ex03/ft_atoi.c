/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:53:00 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/07 20:44:34 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isspace(char a)
{
	if (a == ' ' 
		|| a == '\f'
	 	|| a == '\n'
	 	|| a == '\r'
	 	|| a == '\t'
	 	|| a == '\v')
	{
		return (1);
	}

	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int ind;
	int	is_negativ;
	int	tab[11];
	int result;
	int multiplier;

	multiplier = 1;
	result = 0;
	ind = 0;
	is_negativ = 1;
	i = 0;
	while (ft_isspace(str[i])) //isspace(3) !!!!!
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
		result += tab[ind] * multiplier;
		multiplier *= 10;
		printf("tab[%d] = %d result = %d\n", ind, tab[ind], result);
		ind--;
	}

	return (result * is_negativ);
}

int main ()
{
	char *input = " \n  ---+--+1234ab567";
	//input = "a23";

	//printf("%d", isspace("\t"));

	int result = ft_atoi(input);

	printf("result = %d", result);

	return 0;
}
