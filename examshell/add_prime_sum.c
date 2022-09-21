/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:46:39 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/21 09:41:05 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	
	int digit;
	int i = 0;
	int tab[12];

	while (nb >= 10)
	{
		digit = nb % 10;
		nb /= 10;
		tab[i] = digit + 48;
		i++;

		//printf("%d", digit);
	}

	tab[i] = (nb + 48);

	//printf("i = %d NB = %d %d %d %d\n",i,  nb, tab[0], tab[1], tab[2]);
	
	while (i >= 0)
	{
		write (1, &tab[i] ,1);
		i--;
	}
}

int ft_atoi (char *str)
{

	int i = 0;
	int result = 0;
	int multiplier = 1;
	int is_negativ = 1;

	if (str[i] == '-')
	{
		is_negativ = -is_negativ;
		i++;
	}

	//printf("test du moins = %c\n", str[i]);

	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}

	i--;	
	//printf("test du nbr = %c, %d\n", str[i], i);
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		//printf("result et i  = %d %d\n", result, i);
		result += (str[i] - 48) * multiplier;
		multiplier *= 10;
		i--;
	}
	
	//printf("RESULT = %d\n", result);

	result = result * is_negativ;

	return result;

}

int ft_find_prime (int nb)
{
	if (nb == 0 || nb == 1)
	{
		return 0;
	}

	if (nb == 2 || nb == 3)
	{
		return 1;
	}

	if (nb == 4)
	{
		return 0;

	}


	int i = 2;
	while (i < (nb / i))
	{

		if (nb % i == 0)
		{
			return 0;
		}
		i++;
	}

	return 1;

}


int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;

	int i = 0;
	if (argc == 2 && ft_atoi(argv[1]) >= 0)
	{
		int cible = ft_atoi(argv[1]);
		int sum = 0;
		while (i <= cible)
		{
			printf("i = %d  ", i);
			if (ft_find_prime(i) == 1)
			{
				sum += i;
			}
			i++;
			printf("R = %d\n", sum);
		}



	}

	//ft_putnbr(2147483647);
	//printf("ft_atoi = %d \n", ft_atoi("2147483647"));
	
	printf("ft_find_prime : %d", ft_find_prime(4));


}
