/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:58:25 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/12 15:51:48 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <math.h>
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
		if (r > 46340)
		{
			return (0);
		}
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

	printf("Racine carre de -4 : %d ||  %d\n",
   	ft_sqrt(-4), ((int) sqrt(-4)));
	printf("Racine carre de 0 : %d ||  %d\n",
   	ft_sqrt(0), ((int) sqrt(0)));
	printf("Racine carre de 5 : %d || %d\n",
   	ft_sqrt(5), ((int)  sqrt(5)));
	printf("Racine carre de 144 : %d || %d\n", 
	ft_sqrt(144), ((int)  sqrt(144)));
	printf("Racine carre de 100 : %d || %d\n", 
	ft_sqrt(100), ((int) sqrt(100)));

	printf("Racine carre de 292219953 : %d ||  %d\n", 
	ft_sqrt(292219953),((int) sqrt(292219953)));

	printf("Racine carre de  2147210244 : %d ||  %d\n", 
	ft_sqrt(2147210244), ((int)sqrt(2147210244)));

	int test = 10000000;
	while (test < 10001000)
	{
		if (sqrt(test) != ((int) sqrt(test)))
		{
			if(ft_sqrt(test) != 0)
			{
				printf("cas 0 %d =  %d\n",test, ft_sqrt(test) );
			}
		}

		test++;
	}

	return 0;
}*/
