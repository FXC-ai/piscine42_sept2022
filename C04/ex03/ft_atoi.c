/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:53:00 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/09 11:48:21 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isspace(char a);
int	ft_space_min_finder(char *str, int *is_negativ);
int	ft_atoi(char *str);

int	ft_isspace(char a)
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

int	ft_space_min_finder(char *str, int *is_negativ)
{
	int	i;

	i = 0;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			*is_negativ *= -1;
		}
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	is_negativ;
	int	result;
	int	multiplier;

	multiplier = 1;
	result = 0;
	is_negativ = 1;
	i = ft_space_min_finder(str, &is_negativ);
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	i--;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result += (str[i] - 48) * multiplier;
		multiplier *= 10;
		i--;
	}
	return (result * is_negativ);
}

int main ()
{
	char *input = "   +   ----17888 \n	---+--+1234ab567";

	int result = ft_atoi(input);

	printf("result = %d", result);

	return 0;
}
