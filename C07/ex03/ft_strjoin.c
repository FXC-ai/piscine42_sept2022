/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:39:30 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/13 17:59:49 by fcoindre         ###   ########.fr       */
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

int	ft_strslen(int size, char **strs, char *sep)
{
	int strs_size;
	int i;

	strs_size = 0;
	i = 0;
	while (i < size)
	{
		strs_size += ft_strlen(strs[i]);
		i++;
	}
	strs_size += (size - 1) * ft_strlen(sep);
	strs_size++;
	
	return strs_size;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int str_size;
	int i;
	int j;
	int k;
	char *dest;

	str_size = ft_strslen(size, strs, sep);
	dest = malloc(sizeof(char) * str_size);
	if (dest != NULL)
	{
		i = 0;
		j = 0;
		k = 0;
		while (i < size)
		{
			j = 0;
			while (strs[i][j] != '\0')
			{
				dest[k++] = strs[i][j++];
			}
			j = 0;
			if (i < (size - 1))
			{
				while (sep[j] != '\0')
					dest[k++] = sep[j++];
			}
		i++;
		}
		dest[k] = '\0';
	}
	return dest;
}


int main ()
{
	char *strs[5];
	int size = 5;
	char *sep = " --- ";

	strs[0] = "Ceci est";
	strs[1] = "une longue";
	strs[2] = "chaine de";
	strs[3] = "caractere";
	strs[4] = "tres utile!";
	
	char *dest = ft_strjoin(size, strs, sep);

	printf("dest = %s", dest);

	return 0;
}
