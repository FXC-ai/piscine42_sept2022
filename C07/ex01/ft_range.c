/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:11:05 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/14 17:39:34 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	range = NULL;
	if (max > min)
	{
		size = max - min;
		range = malloc(size * sizeof(int));
		if (range == NULL)
			return (NULL);
		i = 0;
		while (i < size)
		{
			range[i] = min + i;
			i++;
		}
	}
	return (range);
}
/*
int main ()
{
	int min = 9;
	int max = 13;
	int	i = 0;
	int *range = ft_range(min, max);

	printf("range = %p\n", range);
	while (i < (max - min))
	{
		printf("%d : %d\n",i, range[i]);
		i++;
	}
	//printf("apres dernier int :  %d : %d\n",i, range[i]);
	free(range);
}*/
