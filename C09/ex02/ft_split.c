/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:47:32 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/20 17:49:28 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_separator(char caract, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == caract)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_word_count(char *str, char *charset)
{
	int	word_count;
	int	i;
	int	word_check;

	i = 0;
	word_count = 0;
	word_check = 0;
	while (str[i] != '\0')
	{
		if (ft_is_separator(str[i], charset) == 0)
			word_check++;
		if (ft_is_separator(str[i], charset) == 1 && word_check > 0)
		{
			word_count++;
			word_check = 0;
		}
		i++;
	}
	if (word_check > 0)
	{
		word_count++;
	}
	return (word_count);
}

int	ft_size_word(int index, char *str, char *charset)
{
	int		count;
	int		index_ini;

	index_ini = index;
	count = 0;
	while (str[index] != '\0' && ft_is_separator(str[index], charset) == 0)
	{
		index++;
	}
	count = index - index_ini;
	return (count);
}

char	*ft_cpy_word(int i, int size_word, char *str)
{
	char	*word;
	int		j;

	word = malloc((size_word + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	j = 0;
	while (j < size_word)
	{
		word[j] = str[i];
		j++;
		i++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		h;
	int		i;
	char	**tab;
	int		size_word;
	int		word_count;

	word_count = ft_word_count(str, charset);
	tab = malloc(sizeof(char *) * (word_count + 1));
	if (tab == NULL)
		return (NULL);
	h = 0;
	i = 0;
	while (h < word_count)
	{
		size_word = ft_size_word(i, str, charset);
		if (size_word > 0)
		{	
			tab[h] = ft_cpy_word(i, size_word, str);
			i += size_word;
			h++;
		}
		i ++;
	}
	tab[h] = 0;
	return (tab);
}
/*
int main ()
{

	
	char *str = "   test BBB  B  banane poire \t  blanc  bollet   ";
	//char *str = "chaineALouisAnicet";
	char *charset = "\tB";

	int r = ft_word_count(str, charset);

	printf("Nombre de mots : %d\n", r);

	//int s = ft_size_word(20, str, charset);

	//printf("Taille du mot : %d\n", s);
	
	char **tab = ft_split(str, charset);

	int i = 0;

	while (tab[i] != 0)
	{
		printf("tab[%d] = \"%s\"\n", i, tab[i]);
		i++;
	}

	return (0);
}*/
