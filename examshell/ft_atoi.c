/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:38:37 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/16 12:16:16 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int is_neg = 1; 
	int count = 0;
	int result = 0;
	int multiplier = 1;
	int mult = 1;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}

	if (str[i] == '-')
	{
		is_neg = -1;
	}

	//printf("%c\n", str[i]);
	i++;

	while (str[i] >= '0' && str[i] <= '9')
	{
		count++;
		i++;
	}

	i--;
	
	while (count > 1)
	{
		multiplier *= 10;
		count--;
	}


	while (mult <= multiplier)
	{
		//printf("rsult = %d\n", result);
		result += (str[i] - 48) * mult;
		mult *= 10;
		i--;
	}
	
	//printf("isneg = %d\n", is_neg);	
	
	result = result * is_neg;

	//printf("rsult = %d\n", result);
	return (result);
}

int main()
{
	char *str = " \t \n \v \f \r  -2147483648i14ooo";

	printf("REAL : %d\n", atoi(str));
	printf("MINE : %d\n", ft_atoi(str));



}
