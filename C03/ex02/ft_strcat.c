/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:25:14 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/06 19:14:58 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	c = 0;
	while (src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest [i] = '\0';
	return (dest);
}
/*
int main()
{
	char s1[15] = "abcd";
	s1[10] = 'z';
	char *s2 = "efghij";

	char s1_t[15] = "abcd";
	s1_t[10] = 'z';
	char *s2_t = "efghij";

	int i = 0;
	while (i < 15)
	{
		printf("i = %d strcat : %c || %c %d\n", i, s1[i], s1_t[i], s1_t[i]);
		i++;
	}
	printf("-------------------------\n");
	ft_strcat(s1_t, s2_t);
	strcat(s1,s2);
	i = 0;
	while (i < 15)
	{
		printf("i = %d strcat : %c || %c %d \n", i, s1[i], s1_t[i], s1_t[i]);
		i++;
	}
	return 0;
}*/
