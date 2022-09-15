/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:22:43 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/15 18:06:21 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/*struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
char				*ft_strdup(char *src);
int					ft_strlen(char *str);*/
void				ft_show_tab(struct s_stock_str *par);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
void				print_tab(int size, char *tab);
/*
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
	return (tab);
}
*/

void	print_tab(int size, char *tab)
{
	while (size >= 0)
	{
		write(1, &tab[size], 1);
		size--;
	}
}

void	ft_putnbr(int nb)
{
	int		mod;
	char	tab[12];
	int		i;

	i = 0;
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		while (nb >= 10)
		{
			mod = nb % 10;
			tab [i] = mod + '0';
			i++;
			nb = nb / 10;
		}
		tab[i] = (nb + '0');
		print_tab (i, tab);
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
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
	
	tab[2].copy = "NOUVEAU !!!";
	ft_show_tab(tab);
	
	return 0;
}*/
