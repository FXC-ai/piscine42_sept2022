/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:28:41 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/05 14:45:45 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
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
	char *str_test0 = "  `~";
	char *str_test1 = "\n\0";

	int test0 = ft_str_is_printable(str_test0);
	int test1 = ft_str_is_printable(str_test1);

	test0 = ft_str_is_printable(str_test0);
	test1 = ft_str_is_printable(str_test1);

	printf("TEST 0 : %d || TEST 1 : %d", test0, test1);

	return 0;
}*/
