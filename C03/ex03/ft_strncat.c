/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:15:55 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/06 19:52:49 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	c;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	c = 0;
	while (c < nb && src[c] != '\0')
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest [i] = '\0';
	return (dest);
}
/*
int main ()
{

	char s1[15] = "abcd";
	s1[10] = 'z';
	char *s2 = "12\0 3456789123456";

	char s1_t[15] = "abcd";
	s1_t[10] = 'z';
	char *s2_t = "12\0 3456789123456";

	int nb = 9;

	int i = 0;
	while (i < 15)
	{
		printf("i = %d strncat : %c || %c %d\n", i, s1[i], s1_t[i], s1_t[i]);
		i++;
	}
	printf("-------------------------\n");
	ft_strncat(s1_t, s2_t, nb);
	strncat(s1,s2,nb);
	i = 0;
	while (i < 15)
	{
		printf("i = %d strncat : %c || %c %d \n", i, s1[i], s1_t[i], s1_t[i]);
		i++;
	}

}*/
