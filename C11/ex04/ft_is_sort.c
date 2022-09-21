/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:26:47 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/21 20:59:45 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
int ft_inf_sup(int a, int b)
{
	return (a - b);
}
*/
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < (length - 1))
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	int (*ptr_ft_inf_sup)(int, int);

	int tab[4];

	tab[0] = -100;
	tab[1] = -99;
	tab[2] = 3;
	tab[3] = 4;

	ptr_ft_inf_sup = &ft_inf_sup;

	printf("C = %d", ft_is_sort(tab, 4,ptr_ft_inf_sup));


	return 0;
}*/
