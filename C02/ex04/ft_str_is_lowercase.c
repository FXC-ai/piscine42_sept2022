/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:20:17 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/05 13:28:37 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
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
	char *str_test0 = "AbCdEfjghaeg";
	char *str_test1 = "abcdefghijklmnopqrstuvwxyz";

	int test0 = ft_str_is_lowercase(str_test0);
	int test1 = ft_str_is_lowercase(str_test1);

	test0 = ft_str_is_lowercase(str_test0);
	test1 = ft_str_is_lowercase(str_test1);

	printf("TEST 0 : %d || TEST 1 : %d", test0, test1);

	return 0;
}*/
