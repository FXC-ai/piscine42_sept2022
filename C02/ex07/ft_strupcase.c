/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:54:29 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/05 16:21:51 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'A';
			printf("c = %c\n", str[i]);
		}
		i++;
	}

	return str;
}

int main()
{
	char str_test0[] = "az 8.RGFdgsh";
	printf("AVANT : %s\n", str_test0);
	ft_strupcase(str_test0);
	printf("APRES : %s", str_test0);

	return (0);
}
