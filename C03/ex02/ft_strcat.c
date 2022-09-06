/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:25:14 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/06 18:10:26 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
	int	i;
	(void) dest;
	(void) src;


	i = 0;
	while (dest[i] == '\0')
	{
		printf("c = %c", dest[i]);
		i++;
	}
	return dest;
}

int main()
{
	char s1[15] = "abcd";
	s1[10] = 'z';
	char *s2 = "efghijklm";
	int i = 0;

	while (i < 15)
	{
		printf("i =%d : %c\n", i, s1[i]);
		i++;
	}
	printf("-------------------------\n");
	strcat(s1,s2);
	i = 0;
	while (i < 15)
	{
		printf("i =%d : %c\n", i, s1[i]);
		i++;
	}
	return 0;
}
