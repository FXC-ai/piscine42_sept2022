/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:44:55 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/05 18:45:24 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//char	*ft_strcapitalize(char *str);
int	ft_str_is_alpha(char *str);

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


char	*ft_strcapitalize(char *str)
{
	int	i;

	while (*str != '\0')
	{
		i = 0;
		// printf("c= %c \n",*str);
		while ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9'))
		{
			//printf("bc= %c \n",*str);
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

int main()
{
	char str_test[] = "-salut, coMm\nent tu vas ? 42mots +quaRANTEER-deux; cinquante+et+un";
	printf("AVANT : %s\n", str_test);
	ft_strcapitalize(str_test);
	printf("APRES : %s", str_test);
	
	return (0);
}
