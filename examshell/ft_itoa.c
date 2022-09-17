/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:00:13 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/16 15:29:19 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int len_nb (int nb)
{
	int len = 0;
	int n = nb;

	if (nb < 0)
	{
		nb = nb * (-1);
		len++;
	}
	
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	//printf ("%d", len);
	
	return len;
}

char *ft_itoa(int nbr)
{
	int nb = nbr;
	int len = len_nb (nbr);
	int is_neg = 0;

	char *result = malloc(sizeof(char) * (len+1));

	if (nb < 0)
	{
		nb = - nb;
		is_neg = 1;
	}


	int i = (len - 1);
	while (nb != 0)
	{
		result [i] = (nb % 10) + 48;

		nb = nb / 10;
		i--;
	}

	return result;
}

int main ()
{

	int p = 12345678;

	char *res = ft_itoa(12345);
	int i = 0;

	while (i < 5)
	{
		printf("%c", res[i]);
		i++;
	}



}
