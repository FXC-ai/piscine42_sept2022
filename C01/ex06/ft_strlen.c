/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:43:52 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/01 21:05:31 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

/*
int main (void)
{
	char *str = "Try Hard !!!";

	int str_size = ft_strlen(str);

	printf("Il y a %d caracteres dans ce str.", str_size);

	return (0);
}*/
