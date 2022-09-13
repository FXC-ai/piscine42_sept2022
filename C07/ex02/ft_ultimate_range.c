/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:22:00 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/13 15:34:40 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc (sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (size);
}
/*
int main()
{
	int *range = NULL;
	int result;
	int i;
	int min = 0;
	int max = 43;

	result = ft_ultimate_range(&range, min, max);
	printf("result = %d\n", result);

	i = 0;
	while (i < (max - min))
	{
		printf("range[%d] = %d ou ",i, range[i]);
		printf("*(*range + %d) = %d\n", i, *(range + i));
		i++;
	}
	free(range);
	return 0;
}*/
