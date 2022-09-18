/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:01:06 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/18 14:26:21 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int main (int argc, char *argv[])
{
	t_num_expression	*tab;
	char *dict = ft_read_dictionnary(1000, "numbers.dict");

	int nbr = ft_validarg(argc, argv);


	//printf("check nbr = %d", arg_valid);
	
	tab = NULL;

	if (dict)
	{
		tab = ft_num_strs_to_tab(dict);
	}
	
	int i = 0;

	while (tab[i].num == -1)
	{
		printf("%d et %s", tab[i].num, tab[i].expression);
		i++;
	}
	ft_num_to_expression(nbr, tab);

	return 0;
}
