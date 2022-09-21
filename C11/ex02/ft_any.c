/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:38:08 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/21 21:01:48 by fcoindre         ###   ########.fr       */
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
int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if ((*f)(tab[i]) != 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	int (*ptr_fct)(char *);

	char **tab;
   	tab	= malloc (sizeof(char *) * 4);

	tab[0] = "a";
	tab[1] = "v";
	tab[2] = "a";
	tab[3] = NULL;

	ptr_fct = &fct;

	printf("C = %d", ft_any(tab, ptr_fct));


	return 0;
}*/
