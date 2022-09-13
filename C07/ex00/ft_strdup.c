/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:25:52 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/13 10:10:07 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
*/
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*src_dup;
	int		i;
	int		src_size;

	src_size = ft_strlen(src);
	src_dup = malloc(src_size * sizeof(*src));
	i = 0;
	while (src[i] != '\0')
	{
		src_dup[i] = src[i];
		i++;
	}
	src_dup[i] = '\0';
	return (src_dup);
}
/*
int main ()
{

	char *src = "Chaine a copier \t j'espere que 9()---+ fonctionne     .  ";
	
	printf("src_size = 15 sizeof : %lu\n", 15 * sizeof(*src));
	char *src_dup = ft_strdup(src);
	char *src_dup_real = strdup(src);

	printf("ft_strdup : %s\n", src_dup);
	printf("strdup    : %s\n", src_dup_real);
}*/
