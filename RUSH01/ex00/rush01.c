/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:05:21 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/10 19:58:10 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	solCreator (int **sol)
{
	int i;
	int j;
	int k;
	int l;
	int c = 0;

	i = 1;
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			k = 1;
			while (k <= 4)
			{
				l = 1;
				while (l <= 4)
				{
					if ((i != j && i != k && i != l) && (j != k && j != l) && (k != l))
					{
						sol[c][0] = i;
						sol[c][1] = j;
						sol[c][2] = k;
						sol[c][3] = l;
						c++;
					}		
					l++;
				}
				k++;			
			}
			j++;
		}
		i++;
	}
}


void combo_creator(int *combo)
{
	combo[0]= 41;
	combo[1] = 32;
	combo[2] = 31;
	combo[3] = 32;
	combo[4] = 22;
	combo[5] = 23;
	combo[6] = 31;
	combo[7] = 22;
	combo[8] = 31;
	combo[9] = 32;
	combo[10] = 22;
	combo[11] = 23;
	combo[12] = 23;
	combo[13] = 22;
	combo[14] = 21;
	combo[15] = 22;
	combo[16] = 22;
	combo[17] = 23;
	combo[18] = 12;
	combo[19] = 13;
	combo[20] = 12;
	combo[21] = 13;
	combo[22] = 13;
	combo[23] = 14;
}

int find_indice (int ind, int comb, int *list_combo)
{
	while (ind < 24)
	{
		if (list_combo[ind] == comb)
		{
			return ind;
		}
		ind++;
	}

	return (-1);
}


int main (int argc, char *argv[])
{
	
	(void) argc;
	(void) argv;
	

	//Mise des arguments dans le tableau param
	int param[16];
	int	tab_col[4];
	int combo[24];
	int ind_solution[4];
	int i;
	int a;
	int b;

	a = 0;
	b = 0;
	while (argv[1][a] != '\0')
	{
		if (argv[1][a] != ' ')
		{
			param[b] = (argv[1][a] - '0');
			b++;
		}
		a++;
	}

	printf("param = %d\n", param[0]);

	//Creation des combo d'argument
	a = 0;
	b = 4;
	while (a < 4)
	{		
		tab_col[a] = (param[a] * 10) + param[b];		
		printf("res :%d\n param[i]: %d\n param[j]: %d\n\n", tab_col[a], param[a], param[b]);
		a++;
		b++;
	}


	//Creation du tableau des indice combo
	i = 0;
	combo_creator(combo);
	printf("COMBO = %d\n", combo[7]);

	//Creation du tableau des colones possibles
	i = 0;
	int **mat = (int **)malloc(24 * sizeof(int*));
	while (i < 24)
	{	
		mat[i] = (int *)malloc(4 * sizeof(int));
		i++;
	}

	solCreator (mat);
	printf("SOL CREATOR = %d\n", mat[2][3]);


	ind_solution[0] = find_indice(0, 22, combo);
	printf("IND = %d", ind_solution[0]);


	return 0;
}
