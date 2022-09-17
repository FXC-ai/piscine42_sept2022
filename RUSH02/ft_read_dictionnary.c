/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajelicic <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:55:28 by ajelicic          #+#    #+#             */
/*   Updated: 2022/09/17 17:34:54 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

char	*ft_read_dictionnary(int nbChars, char *dict_path)
{
	int		filedescriptor;
	int		read_size;
	char	*dico;

	read_size = 0;
	filedescriptor = open(dict_path, O_RDONLY);
	if (filedescriptor != -1)
	{
		dico = malloc(sizeof(char) * nbChars);
		if (dico == NULL)
			return (NULL);
		read_size = read(filedescriptor, dico, nbChars);
		if (read_size < 0)
		{
			write(1, "Dict Error\n", 11);
			return (0);
		}
		else
			return (dico);
	}
	else
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
}
