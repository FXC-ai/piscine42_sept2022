/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:34:45 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/05 16:40:12 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char str_test0[] = "ABCDEtfdHGKlM0123456789+-";
	printf("AVANT : %s\n", str_test0);
	ft_strlowcase(str_test0);
	printf("APRES : %s", str_test0);

	return (0);
}*/
