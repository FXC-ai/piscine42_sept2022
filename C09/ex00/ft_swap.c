/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:52:36 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/01 19:09:15 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int a;
	int b;

	a = 12;
	b = 98;

	printf("a = %d and b = %d\n", a,b);
	ft_swap(&a, &b);
	printf("a = %d and b = %d", a,b);
	return (0);
}*/
