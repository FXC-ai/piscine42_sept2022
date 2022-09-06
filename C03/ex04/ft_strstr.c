/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:53:13 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/06 20:00:10 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{

	int		i;
	char	*ptr_to_find;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			
		}
		i++;
	}

}


int main ()
{
	

	return (0);
}
