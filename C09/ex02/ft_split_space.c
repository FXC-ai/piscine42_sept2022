/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:47:32 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/19 10:06:19 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	int	count_space = 0;

	count = 0;
	while (ft_is_separator(str[index], charset) == 0)
	{
		if (ft_isspace(str[index]) == 1)
		{
			count_space++;
		}
		index++;
		count++;
	}
	if (count == count_space)
		return (0);
	return (count);
}




char	**ft_split(char *str, char *charset)
{
	int i;
	int h;
	int j;
	char **tab = NULL;
	char *word = NULL;
	int size_word = 0;
	
	int word_count = ft_word_count(str, charset);
	tab = malloc(sizeof(char *) * word_count);
	if (tab == NULL)
		return NULL;
	h = 0;
	i = 0;
	j = 0;
	while (h < word_count)
	{
		size_word = ft_size_word(i, str, charset);
		if (size_word > 0)
		{	
			word = malloc((size_word + 1) * sizeof(char));
			if (word == NULL)
				return NULL;
			j = 0;
			while (j < size_word)
			{
				word[j] = str[i];
				j++;
				i++;
			}
			word[j] = '\0';
			tab[h] = word;
			h++;
		}
		i++;
	}
	return tab;
}


int main ()
{
	
	char *test = "  i   l AAABBl      lCCC     D lll E lll FFF";
	//char *test = "aaalbbblccc";
	
	char **tab = ft_split(&test[0], "l");
	int i = 0;

	while (i < 3)
	{
		printf("tab = %s\n", tab[i]);
		i++;
	}
	

	return (0);
}

