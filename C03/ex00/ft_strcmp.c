/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:29:04 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/07 11:32:07 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	result;

	result = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		result = (unsigned char) *s1 - (unsigned char) *s2;
		if (result != 0)
		{
			return (result);
		}
		s1++;
		s2++;
	}
	return (result);
}

int main()
{
	char *s1 = "aAbce\200";
	char *s2 = "aQ1bce\0";

	int r = strcmp(s1, s2);
	int r_mafonction = ft_strcmp(s1, s2);

	printf("strcmp : %d || ft_strcmp : %d\n", r, r_mafonction);

	return 0;
}
