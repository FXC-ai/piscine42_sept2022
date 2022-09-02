/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:25:51 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/02 15:00:21 by fcoindre         ###   ########.fr       */
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
	return (dest);
}
/*
int	main(void)
{
	char *str0 = "Bing";
	char str1[5];

	strcpy(str1, str0);

	printf("Fonction strcpy str1 = %s\n", str1);

	char str3[5];

	char *dest = ft_strcpy(str3, str0);

	printf("Fonction ft_strcpy str3 = %s\n", str3);

	printf("Fonction ft_strcpy dest = %p", dest);

	return (0);
}*/
