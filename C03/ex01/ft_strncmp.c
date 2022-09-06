/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:54:38 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/06 15:10:29 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (((*s1 != '\0') && (*s2 != '\0')) || (i < n)) 
	{
		//printf("i = %d\n n = %d \n", i, n);
		if (*s1 != *s2)
		{
			return ((unsigned char) *s1 - (unsigned char) *s2);
		}
		i++;
		s1++;
		s2++;
	}

	return (0);
}

int main ()
{
	char *s1_test0 = "abcd";
	char *s2_test0 = "abcde";

	char *s1_test1 = "abcde";
	char *s2_test1 = "abcd";

	char *s1_test2 = "abcDe";
	char *s2_test2 = "abcde";

	unsigned int n = 5;

	int test0 = strncmp(s1_test0, s2_test0, n);
	int test1 = strncmp(s1_test1, s2_test1, n);
	int test2 = strncmp(s1_test2, s2_test2, n);

	printf("strncmp : TEST0 = %d || TEST1 = %d || TEST2 = %d\n", test0, test1, test2);


	test0 = ft_strncmp(s1_test0, s2_test0, n);
	test1 = ft_strncmp(s1_test1, s2_test1, n);
	test2 = ft_strncmp(s1_test2, s2_test2, n);
	
	printf("ft_strncmp : TEST0 = %d || TEST1 = %d || TEST2 = %d\n", test0, test1, test2);
	
	printf("TEST CONDITION = %d",(1 || 0 || 0));
	
	return 0;
}
