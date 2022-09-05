/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:55:54 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/05 14:25:35 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int main()
{
	char *str_test0 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *str_test1 = "A1BCD";

	int test0 = ft_str_is_uppercase(str_test0);
	int test1 = ft_str_is_uppercase(str_test1);

	test0 = ft_str_is_uppercase(str_test0);
	test1 = ft_str_is_uppercase(str_test1);

	printf("TEST 0 : %d || TEST 1 : %d", test0, test1);

	return 0;
}*/
