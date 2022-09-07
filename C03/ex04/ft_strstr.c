/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:53:13 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/07 16:26:42 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	int		i;
	int		c;

	i = 0;
	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
			a = &str[i];
		c = 0;
		while (to_find[c] == str[i + c])
		{
			if (to_find[c + 1] == '\0')
				return (a);
			c++;
		}
		i++;
	}
	return (NULL);
}
/*
int main ()
{
	char *str = "poiiiiiiiaaam ";
	char *to_find = "t";

	char *result = ft_strstr(str, to_find);
	char *result_c = strstr(str, to_find);
	printf("result       = %s\n", result);
	printf("result core  = %s\n", result_c);

	return (0);
}*/
