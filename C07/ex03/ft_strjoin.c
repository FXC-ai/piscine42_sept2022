/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:39:30 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/17 19:17:52 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	ft_strslen(int size, char **strs, char *sep);
int	strscpy(int size, char **dest, char **strs, char *sep);

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
	int	strs_size;
	int	i;

	strs_size = 0;
	i = 0;
	while (i < size)
	{
		strs_size += ft_strlen(strs[i]);
		i++;
	}
	strs_size += (size - 1) * ft_strlen(sep);
	strs_size++;
	return (strs_size);
}

int	strscpy(int size, char **dest, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			(*dest)[k++] = strs[i][j++];
		j = 0;
		if (i < (size - 1))
		{
			while (sep[j] != '\0')
				(*dest)[k++] = sep[j++];
		}
		i++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		str_size;
	int		ind_end_str;
	char	*dest;

	dest = NULL;
	if (size == 0)
	{
		dest = malloc(0);
		return (dest);
	}
	str_size = ft_strslen(size, strs, sep);
	dest = malloc(sizeof(char) * str_size);
	if (dest != NULL)
	{
		ind_end_str = strscpy(size, &dest, strs, sep);
		dest[ind_end_str] = '\0';
	}
	return (dest);
}
/*
int main ()
{
	char *strs[5];
	int size = 0;
	char *sep = "\n";

	strs[0] = "a";
	strs[1] = "b";
	strs[2] = "c";
	strs[3] = "dfdfdffd";
	strs[4] = "ccccc";
	
	char *dest = ft_strjoin(size, strs, sep);

	printf("dest = %s", dest);
	free(dest);
	return 0;
}*/
