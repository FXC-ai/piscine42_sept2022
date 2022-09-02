/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:15:27 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/02 12:12:17 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	stop;
	int	temp;

	stop = size / 2;
	count = 0;
	while (count < stop)
	{
		temp = tab[count];
		tab[count] = tab [(size -1) - count];
		tab [(size - 1) - count] = temp;
		count++;
	}
}
/*
int	main(void)
{
	int	size = 7;
	int	count = 0;

	int tab[7];

	tab [0] = 1;
	tab [1] = 2;
	tab [2] = 3;
	tab [3] = 4;
	tab [4] = 5;
	tab [5] = 6;
	tab [6] = 7;

	while (count < size)
	{
		printf("tab[%d] = %d\n", count, tab[count]);
		count++;
	}

	ft_rev_int_tab(tab, size);
	
	printf("-----------------------------------------\n");

	count = 0;
	while (count < size)
    {
        printf("tab[%d] = %d\n", count, tab[count]);
        count++;
    }

	return (0);
}*/
