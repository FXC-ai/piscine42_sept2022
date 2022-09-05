/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:08:07 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/05 13:17:59 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= '0' && *str <= '9')))
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
	char *str0 = "123456789A";
	char *str1 = "1236076219";
	char *str2 = "12/6876219";

	int test0 = ft_str_is_numeric(str0);
	int test1 = ft_str_is_numeric(str1);
	int test2 = ft_str_is_numeric(str2);

	printf("TEST 0 = %d || TEST 1 = %d || TEST 3 = %d", test0, test1, test2);
	return 0;

}*/
