/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:29:30 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/17 12:34:15 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_rush02.h"

char	*ft_strdup(char *src)
{
	char	*src_dup;
	int		i;
	int		src_size;

	src_size = ft_strlen(src);
	src_dup = malloc((src_size + 1) * sizeof(*src));
	if (src_dup == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		src_dup[i] = src[i];
		i++;
	}
	src_dup[i] = '\0';
	return (src_dup);
}
