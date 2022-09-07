/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:53:13 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/07 11:24:26 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>
*/




char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		c;
	int		check;
	char	*ptr_to_find;

	check = 0;
	c = 0;
	i = 0;
	ptr_to_find = NULL;
	if (*to_find == '\0' || to_find == NULL)
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		c = 0;
		if (str[i] == to_find[0])
		{
			ptr_to_find = &str[i];
			check = 1;
		}
		while (to_find[c] != '\0' && check == 1)
		{
			if (to_find[c] != str[i])
			{
				check = 0;
				ptr_to_find = NULL;
				break ;
			}
			i++;
			c++;
		}
		if (check == 1)
		{
			return (ptr_to_find);
		}
		i++;
	}
	return (ptr_to_find);
}
/*
int main ()
{
	char *str = "JE ne suis sur que mon} code fonctionne";
	char *to_find = "jjjjjj";	

	char *result = ft_strstr(str, to_find);
	char *result_c = strstr(str, to_find);
	printf("result = %s\n", result);
	printf("result test  = %s\n", result_c);


	return (0);
}*/
