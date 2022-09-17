/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarl <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:36:28 by ckarl             #+#    #+#             */
/*   Updated: 2022/09/17 18:40:28 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int	ft_validint(char *str)
{
	int	i;

	i = 0;
	if (str[i] < '0' || str[i] > '9')
		return (1);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i + 1] == '.' && (str[i + 2] >= '0' && str[i + 2] <= '9'))
			return (1);
		else
			i++;
	}
	return (0);
}

int	ft_validarg(int argc, char **argv)
{
	int	x;

	x = 0;
	if (argc == 3 || argc == 2)
	{
		if (ft_validint(argv[argc - 1]) == 1 || ft_atoi(argv[argc - 1]) < 0)
		{
			write (1, "Error\n", 6);
			return (-1);
		}
		x = ft_atoi(argv[argc - 1]);
	}
	else
	{
		write (1, "Error\n", 6);
		return (-1);
	}
	return (x);
}
