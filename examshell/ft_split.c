/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:52:10 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/22 20:45:52 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_isspace (char c)
{
	
	if (c == ' ' ||  c == '\t' ||  c == '\n')
	{
		return 1;
	}

	return 0;


}



int ft_count_word(char *str)
{

	int i = 0;
	int check = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]) == 0)
		{
			check++;
		}

		if (ft_isspace(str[i]) == 1 && check > 0)
		{
			check = 0;
			count += 1;
		}
		i++;
	}

	if (check > 0)
	{
		count++;
	}


	return count;
}

int ft_size_word (char *str, int index)
{
	int word_size = 0;

	while (str[index] != '\0' && ft_isspace(str[index]) == 0)
	{
		word_size++;
		index++;
	}
	
	return word_size;

}


char *word_cpy(char *str, int index, int word_size)
{
	
	char *line; 
	int i;

	line = malloc(sizeof(char) * (word_size+1));
	
	i = 0;
	while (i < word_size)
	{

		line [i] = str[index+i];
		i++;
	}
	
	line[i] = '\0';

	return line;

}



char	**ft_split(char *str)
{

	char **tab;
	int word_size;


	int word_count = ft_count_word(str);

	//printf("wwwwww %d\n", word_count);
		
	tab = malloc (sizeof(char *) * (word_count+1));
	if (tab == NULL)
	{
		return NULL;
	}
	
	int i = 0;
	int j = 0;
	while (j <  word_count)
	{
		
		word_size = ft_size_word(str, i);
		//printf("ws = %d", word_size);
		
		if (word_size > 0)
		{
			tab[j] = word_cpy(str, i, word_size);
			j++;
			i+=word_size;
		}
	
	
		i++;
	}
	tab[j] = 0;
	
	return tab;
}




int main ()
{
	char *str = " abc   abc ii  ";
	

	char **tab = ft_split(str);

	int nb_word = ft_count_word(str);

	//printf("%s", tab[0]);
	
	int i = 0;
	while (i < nb_word)
	{

		printf("st = %s\n", tab[i]);
		i++;
	}


	return 0;
}
