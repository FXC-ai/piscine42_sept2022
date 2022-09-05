/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:29:38 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/05 15:56:39 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
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
	char *str_test0 = "";
	char *str_test1 = "Tkt55tkt";
	char *str_test2 = "a   .>! ";
	
	int test0 = ft_str_is_alpha(str_test0);
	int test1 = ft_str_is_alpha(str_test1);
	int test2 = ft_str_is_alpha(str_test2);

	test0 = ft_str_is_alpha(str_test0);
	test1 = ft_str_is_alpha(str_test1);
	test2 = ft_str_is_alpha(str_test2);

	printf("TEST 0 : %d || TEST 1 : %d || TEST 2 : %d", test0, test1, test2);

	return 0;
}*/
