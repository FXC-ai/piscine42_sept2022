/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:47:32 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/18 21:19:00 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

int ft_is_separator(char caract, char *charset)
{
	int	i;

	i = 0;
	while(charset[i] != '\0')
	{
		if (charset[i] == caract)
		{
			return (1);
		}
		i++;
	}
	return (0);
}


int ft_isspace(char c)
{
	if (c == '\t' ||
	  	c == '\n' ||
	  	c == '\v' ||
	  	c == '\f' ||
	  	c == '\r' ||
	  	c == ' ' )
	{
		return (1);
	}
	return (0);
}

int ft_word_count(char *str, char *charset)
{
	int	count;
	int	i;
	int check_word;

	i = 0;
	count = 0;
	check_word = 0;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]) == 0 && ft_is_separator(str[i], charset) == 0)
				check_word++;
		if (check_word != 0 && ft_is_separator(str[i], charset) == 1)
		{
			check_word = 0;
			count++;
		}
		i++;
	}
	if (check_word > 0)
		count++;
	return (count);
}

int ft_size_word(int index, char *str, char *charset)
{
	int		count;


	printf("DEPART = %c\n", str[index]);
	count = 0;

	while (ft_is_separator(str[index], charset) == 0)
	{
		index++;
		count++;
	}

	printf("ARRIVEE = %c et count = %d\n", str[index], count);

	return (0);
}


char	**ft_split(char *str, char *charset)
{

	//int i = 0;
	char **tab = NULL;
	(void) charset;
	
	int count = ft_word_count(str, charset);

	printf("nb de mot = %d\n", count);

	tab = malloc(sizeof(char *) * count);
	if (tab == NULL)
		return NULL;

	ft_size_word(0, str, charset);


	return tab;

}


int main ()
{
	
	char *test = " AAA  BBl      lCCC     D lll E lll FFF";
	
	ft_split(test, "l ");

	return (0);
}

