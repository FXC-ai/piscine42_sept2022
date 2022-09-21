/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:34:36 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/21 18:55:19 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


void ft_putnbr (int nb)
{
	int mod = 0;
	char caract = 0;
	char tab[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
	int i = 0;
	if (nb == -2147483648)
		write (1, "-2147483648",11 );	
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-",1);
		}
		while (nb >10)
		{
			mod = nb % 10;
			caract = mod + '0';
			tab [i] = caract;
			i++;
			nb = nb / 10;
		}
		tab[i] = (nb + '0');		
		while (i >= 0)
		{
			write(1, &tab[i], 1);
			i--;
		}
	}
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	(void) tab;
	(void) length;
	(void) f;

	int	i;

	i = 0;
	while (i < length)
	{
		*f(tab[i]);
		i++;

	}

	printf("test\n");

}

int main ()
{
	int tab[5];

	tab[0] = 0;
	tab[1] = 2;
	tab[2] = 21;
	tab[3] = 42;
	tab[4] = 6006;

	
	void	(*ptr_putnbr)(int);
	
	ptr_putnbr = &ft_putnbr;

	ft_foreach(tab, 5, ptr_putnbr);

	return 0;
}
