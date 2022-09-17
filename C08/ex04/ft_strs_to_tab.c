/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:22:43 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/16 10:02:28 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
char				*ft_strdup(char *src);
int					ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*src_dup;
	int		i;
	int		src_size;

	src_size = ft_strlen(src);
	src_dup = malloc(src_size * sizeof(*src));
	if (src_dup == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		src_dup[i] = src[i];
		i++;
	}
	src_dup[i] = '\0';
	return (src_dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{	
	int			i;
	t_stock_str	*tab;

	if (ac <= 0)
	{
		return (NULL);
	}
	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[ac].str = 0;
	tab[ac].copy = 0;
	tab[ac].size = 0;
	return (tab);
}
/*
int main ()
{
	char *av[3];
	int ac = 3;

	av[0] = "premiere chaine";
	av[1] = "seconde chaine";
	av[2] = "Aller courage !!!";

	t_stock_str *tab = ft_strs_to_tab(ac, av);

	printf("Pointeur = %p\n", tab);
	
	if (tab != NULL)
	{
		printf("str = %s, copy =  %p, size =  %d\n",
	   	tab[0].str, tab[0].copy, tab[0].size);
		printf("str = %s, copy =  %p, size =  %d\n",
	   	tab[1].str, tab[1].copy, tab[1].size);
		printf("str = %s, copy =  %s, size =  %d\n", 
		tab[3].str, tab[3].copy, tab[3].size);
	}
	
	return 0;
}*/
