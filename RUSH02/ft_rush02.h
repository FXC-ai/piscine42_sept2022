/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:51:40 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/17 19:06:10 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH02_H
# define FT_RUSH02_H
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

/*Structure s_num_expression*/
struct s_num_expression
{
	int		num;
	char	*expression;
};

typedef struct s_num_expression	t_num_expression;

/*Fonctions de base*/
int					ft_atoi(char *str);
char				*ft_strdup(char *src);
int					ft_strlen(char *str);

/*Gestion des arguments*/
int					ft_validint(char *str);
int					ft_validarg(int argc, char **argv);

/*Lecture du dictionnaire */
char				*ft_read_dictionnary(int nbChars, char *dict_path);

/*Affichage expression*/
void				ft_num_to_expression(int nbr, t_num_expression *tab);


/*Fonction split*/
int					ft_is_separator(char *str, char *charset);
int					ft_wordlen(char *str, char *charset);
int					ft_wordcount(char *str, char *charset);
char				*ft_wordcpy(char *src, int n);
char				**ft_split(char *str, char *charset);

/*Parser*/
int					ft_parse_num(char *line);
char				*ft_parse_expression(char *line);
t_num_expression	*ft_num_strs_to_tab(char *dict);

#endif
