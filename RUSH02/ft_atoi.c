/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:31:22 by ckarl             #+#    #+#             */
/*   Updated: 2022/09/17 12:12:46 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_rush02.h"

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
	   	i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			result = (result + (str[i] - '0')) * 10;
		else
			result = result + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
