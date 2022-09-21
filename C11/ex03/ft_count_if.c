/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:14:27 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/21 21:02:39 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
/*
int fct (char *str)
{
	if (str[0] == 'a')
	{
		return 0;
	}
	return 1;
}
*/
int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
		{
			count++;
		}
		i++;
	}
	return (count);
}
/*
int main()
{
	int (*ptr_fct)(char *);

	char **tab;
   	tab	= malloc (sizeof(char *) * 4);

	tab[0] = "a";
	tab[1] = "v";
	tab[2] = "j";
	tab[3] = "a";

	ptr_fct = &fct;

	printf("C = %d", ft_count_if(tab, 4,ptr_fct));


	return 0;
}*/
