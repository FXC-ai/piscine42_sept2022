/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:44:55 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/05 19:37:34 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	while (*str != '\0')
	{
		i = 0;
		while ((*str >= 'A' && *str <= 'Z')
			|| (*str >= 'a' && *str <= 'z')
			|| (*str >= '0' && *str <= '9'))
		{
			if (i == 0 && (*str >= 'a' && *str <= 'z'))
			{
				*str = *str - 32;
			}
			else if (i > 0 && (*str >= 'A' && *str <= 'Z'))
			{
				*str = *str + 32;
			}
			i++;
			str++;
		}
		str++;
	}
	return (str);
}
/*
int main()
{
	char str_test[] = "-sut, coMnt tu vas ? 42ts +quER-dx; cite+et+un";
	printf("AVANT : %s\n", str_test);
	ft_strcapitalize(str_test);
	printf("APRES : %s", str_test);
	
	return (0);
}*/
