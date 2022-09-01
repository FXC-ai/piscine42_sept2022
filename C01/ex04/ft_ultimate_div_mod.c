/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:41:25 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/01 19:59:44 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int a;
	int b;

	a = 250;
	b = 48;

	printf("a = %d et b = %d\n", a,b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d et b = %d", a,b);


	return (0);
}*/
