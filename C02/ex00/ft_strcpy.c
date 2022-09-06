/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:25:51 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/06 09:16:54 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char *str0 = "Bing";
	char str1[5] = {1,1,1,1,1};
	char str2[5] = {1,1,1,1,1};
	int i;

	char *dest0 = strcpy(str1, str0);
	char *dest1 = ft_strcpy(str2, str0);


	printf("Source  = %s\n", str0);


	printf("dest0 = %s\n", dest0);
	i = 0;
	while (i < 5)
	{
		printf("str[%d] = %d\n",i, str1[i]);
		i++;
	}

	printf("dest1 = %s\n", dest1);
	i = 0;
	while (i < 5)
	{
		printf("str[%d] = %d\n",i, str2[i]);
		i++;
	}

	return (0);
}*/
