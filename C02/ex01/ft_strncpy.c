/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:10:14 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/05 11:27:00 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int		ft_strlen(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	lengh_src;

	lengh_src = ft_strlen(src);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (lengh_src < n)
	{
		while (i < lengh_src)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
/*
int main(void)
{
	char *str0 = "abcde";
	char dest[8] = {0,0,0,1,0,1,0,0};
	char dest_test[] = {0,0,0,1,0,1,0,0};
	unsigned int n;
	int i;
	
	printf("chaine initiale : %s\n", str0);	

	i = 0;
	n = 3;
	strncpy(dest, str0, n);
	ft_strncpy(dest_test, str0, n);
	printf("\nPour n = %d\n\n", n);
	while (i < 8)
	{
		printf("dest[%d] = %c (%d)  ", i, dest[i], dest[i]);
		printf("ft_strcpy : dest[%d] = %c (%d)\n", i, dest_test[i], dest_test[i]);
		i++;
	}

	i = 0;
	n = 4;
	strncpy(dest, str0, n);
	ft_strncpy(dest_test, str0, n);
	printf("\nPour n = %d\n\n", n);
	while (i < 8)
	{
		printf("dest[%d] = %c (%d)  ", i, dest[i], dest[i]);
		printf("ft_strcpy : dest[%d] = %c (%d)\n", i, dest_test[i], dest_test[i]);
		i++;
	}
	
	i = 0;
	n = 5;
	strncpy(dest, str0, n);
	ft_strncpy(dest_test, str0, n);
	printf("\nPour n = %d\n\n", n);
	while (i < 8)
	{
		printf("dest[%d] = %c (%d)  ", i, dest[i], dest[i]);
		printf("ft_strcpy : dest[%d] = %c (%d)\n", i, dest_test[i], dest_test[i]);
		i++;
	}

	i = 0;
	n = 6;
	strncpy(dest, str0, n);
	ft_strncpy(dest_test, str0, n);
	printf("\nPour n = %d\n\n", n);
	while (i < 8)
	{
		printf("dest[%d] = %c (%d)  ", i, dest[i], dest[i]);
		printf("ft_strcpy : dest[%d] = %c (%d)\n", i, dest_test[i], dest_test[i]);
		i++;
	}

	return (0);
}*/
