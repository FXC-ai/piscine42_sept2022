/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:17:42 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/21 21:01:21 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
int	fct(int n)
{
	return (n * 2);
}
*/
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tab_cpy;

	tab_cpy = malloc(sizeof(int) * length);
	if (tab_cpy == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		tab_cpy[i] = (*f)(tab[i]);
		i++;
	}
	return (tab_cpy);
}
/*
int main ()
{
	
	int tab[4];

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;


	int (*ptr_fct)(int);

	ptr_fct = &fct;

	int *test = ft_map(tab, 4, ptr_fct);

	int i = 0;
	while (i < 4)
	{
		printf("test = %d\n", test[i]);
		i++;
	}

	return 0;
}*/
