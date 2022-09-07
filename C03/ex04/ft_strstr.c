/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:53:13 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/07 13:00:01 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		c;

	c = 0;
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i] == to_find[c] && to_find[c] != '\0')
		{
			i++;
			c++;
		}
		if (to_find[c] == '\0')
			return (str + i - c);
		else
			c = 0;
		i++;
	}
	return (NULL);
}

int main ()
{
	char *str = "pap ppp\0 ppp";
	char *to_find = "\0 ppp";	

	char *result = ft_strstr(str, to_find);
	char *result_c = strstr(str, to_find);
	printf("result       = %s\n", result);
	printf("result test  = %s\n", result_c);


	return (0);
}
