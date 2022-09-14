/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:22:00 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/14 17:31:08 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*range_intern;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	range_intern = malloc (sizeof(int) * size);
	if (range_intern == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		range_intern[i] = min + i;
		i++;
	}
	*range = range_intern;
	return (size);
}
/*
int main()
{
	int *range = NULL;
	int result;
	int i;
	int max = 2147483647;
	int min = -3967;

	result = ft_ultimate_range(&range, min, max);
	printf("length = %d\n", result);
	printf("*range = %p\n", range);

	if (range != NULL)
	{
		printf("tab: ");
		i = 0;
		while (i < (max - min))
		{
			printf(" %d,", range[i]);
			i++;
		}
	}
	free(range);
	return 0;
}*/
