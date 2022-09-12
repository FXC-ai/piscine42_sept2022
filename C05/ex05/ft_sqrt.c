/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:58:25 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/12 10:04:44 by fcoindre         ###   ########.fr       */
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

	printf("Racine carre de -4 : %d\n", ft_sqrt(-4));
	printf("Racine carre de 0 : %d\n", ft_sqrt(0));
	printf("Racine carre de 5 : %d\n", ft_sqrt(5));
	printf("Racine carre de 144 : %d\n", ft_sqrt(144));
	printf("Racine carre de 100 : %d\n", ft_sqrt(100));
	printf("Racine carre de 3331 : %d\n", ft_sqrt(3331));
	printf("Racine carre de  2147210244 : %d\n", ft_sqrt(2147210244));

}*/
