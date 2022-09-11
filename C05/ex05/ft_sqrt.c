/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:58:25 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/11 14:53:19 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_sqrt(int nb)
{
	int	r;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	r = 1;
	while (r < (nb / 2))
	{
		if (r * r == nb)
		{
			return (r);
		}
		r++;
	}
	return (0);
}
/*
int main ()
{

	int test = 0;
	while (test < 46340)
	{
		printf("test = %d => %d || ", test, (test*test) );
		printf("ft_sqrt(%d) = %d\n", (test*test), ft_sqrt(test*test));
		if (test != ft_sqrt(test*test))
		{
			printf("ERROR !!!!");
		}

		test++;

	}

	int r;

	
	r = ft_sqrt(7);
	printf("r = %d\n", r);


}*/
