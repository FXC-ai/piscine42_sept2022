/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:44:28 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/05 09:59:09 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	check;

	check = 0;
	while (check < size)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				c = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = c;
			}	
			i++;
		}
		check++;
	}
}
/*
int main(void)
{
	int tab[5];
	int size = 5;

	tab[0] = 18;
	tab[1] = 10;
	tab[2] = 1;
	tab[3] = -55;
	tab[4] = 244;


	int i = 0;
	while (i < size)
	{
		printf("%p : tab[%d]=%d\n", &tab[i] , i, tab[i]);
		i++;
	}
	
	ft_sort_int_tab(tab, size);
	printf("   APRES TRI    \n");

	i = 0;
	while (i < size)
	{
		printf("%p : tab[%d]=%d\n", &tab[i] , i, tab[i]);
		i++;
	}

	return 0;
}*/
