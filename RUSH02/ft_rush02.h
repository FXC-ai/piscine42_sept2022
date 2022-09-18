/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:51:40 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/18 12:44:42 by fcoindre         ###   ########.fr       */
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

/*Basic functions*/
int					ft_atoi(char *str);
char				*ft_strdup(char *src);
int					ft_strlen(char *str);
void				ft_putstr(char *str);

/*Arguments gestion*/
int					ft_validint(char *str);
int					ft_validarg(int argc, char **argv);

/*Read dictionnary*/
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

/*Display expression*/
void				display_nbr(int nbr, t_num_expression *tab);
void				ft_give_nbr(int divider, int nbr, t_num_expression *tab);
void				ft_num_to_expression(int nbr, t_num_expression *tab);

#endif
