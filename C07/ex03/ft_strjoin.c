/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:39:30 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/13 16:19:22 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


char	*ft_strjoin(int size, char **strs, char *sep)
{
	int str_size;
	int i;
	(void) sep;

	str_size = 0;
	i = 0;
	while (i < size)
	{
		str_size += ft_strlen(strs[i]);
		i++;
	}

	printf("str_size = %d\n", str_size);
	str_size += (size - 1) * ft_strlen(sep);
	str_size++;
	printf("str_size = %d", str_size);
	
	return NULL;
}


int main ()
{
	char *strs[5];
	int size = 5;
	char *sep = " ";

	strs[0] = "Ceci est";
	strs[1] = "une longue";
	strs[2] = "chaine de";
	strs[3] = "caractere";
	strs[4] = "tres utile!";
	
	ft_strjoin(size, strs, sep);

	return 0;
}
