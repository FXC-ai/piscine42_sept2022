/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:13:22 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/01 19:35:43 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int div;
	int mod;

	a = 25;
	b = 4;
	
	printf("a = %d et b = %d\n",a,b);

	ft_div_mod(a, b, &div, &mod);

	printf("div = %d et mod = %d", div, mod);

	return (0);
}*/
