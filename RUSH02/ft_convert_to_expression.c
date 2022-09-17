/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_expression.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:56:21 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/17 16:56:07 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
#include <stdio.h>

char *dict = "0: zero\n1: one\n2: two\n3: three\n4: four\n5: five\n6: six\n7: seven\n8: eight\n9: nine\n10: ten\n11: eleven\n12: twelve\n13: thirteen\n14: fourteen\n15: fifteen\n16: sixteen\n17: seventeen\n18: eighteen\n19: nineteen\n20: twenty\n30: thirty\n40: forty\n50: fifty\n60: sixty\n70: seventy\n80: eighty\n90: ninety\n100: hundred\n";

int	ft_parse_num(char *line)
{
	int		i;
	char	str_num[37];

	i = 0;
	while (line[i] >= '0' && line[i] <= '9')
	{
		str_num[i] = line[i];
		i++;
	}
	str_num[i] = '\0';
	return (ft_atoi(str_num));
}

char	*ft_parse_expression(char *line)
{
	int		i;
	int		c;
	int		begin_expr;
	int		size_expression;
	char	*expression;

	i = 0;
	while (line[i] == ' ')
		i++;
	begin_expr = i;
	size_expression = 0;
	while (line[i] != '\0')
	{
		i++;
		size_expression++;
	}
	expression = malloc(sizeof(char) * (size_expression + 1));
	i = begin_expr;
	c = 0;
	while (line[i] != '\0')
		expression[c++] = line[i++];
	expression[c] = '\0';
	return (expression);
}

t_num_expression	*ft_num_strs_to_tab(char *dict)
{
	int					i;
	int					size;
	char				**tab_line;
	char				**line;
	t_num_expression	*tab;

	i = -1;
	size = 0;
	while (dict[++i] != '\0')
	{
		if (dict[i] == '\n')
			size++;
	}
	tab = malloc(sizeof(t_num_expression) * (size + 1));
	tab_line = ft_split(dict, "\n");
	i = -1;
	while (++i < size)
	{
		line = ft_split(tab_line[i], ":");
		tab[i].num = ft_parse_num(line[0]);
		tab[i].expression = ft_parse_expression(line[1]);
	}
	tab[size].num = -1;
	tab[size].expression = "\0";
	return (tab);
}

int main ()
{
	t_num_expression	*tab;

	tab = ft_num_strs_to_tab(dict);

	printf("expression = %s\n", tab[0].expression);
	int i = 0;

	while (tab[i].num != -1)
	{
		printf("num = %d || ", tab[i].num);
		printf("expression = %s\n", tab[i].expression);
		i++;
	}

	return 0;
}
