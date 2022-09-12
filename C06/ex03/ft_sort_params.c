/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:01:27 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/12 18:37:15 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_display_params(int argc, char **argv);
void	swap(char **s1, char **s2);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	result = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		result = (unsigned char) *s1 - (unsigned char) *s2;
		if (result != 0)
		{
			return (result);
		}
		s1++;
		s2++;
	}
	return (result);
}

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_display_params(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		j;
	int		i;

	i = 1;
	j = 1;
	if (argc != 1)
	{
		while (j < argc)
		{
			i = 1;
			while (i < (argc - 1))
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				{
					swap(&argv[i], &argv[i + 1]);
				}
				i++;
			}
			j++;
		}
		ft_display_params(argc, argv);
	}
	return (0);
}
