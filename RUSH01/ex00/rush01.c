/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:05:21 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/10 15:37:38 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	displayTab(int sol[24][4])
{
	int i = 0;
	int j;

	while (i < 24)
	{
		j = 0;
		printf("\n%d : ", i);
		while (j < 4)
		{
			printf(" %d", sol[i][j]);
			j++;
		}
		i++;
	}

}



int main (/*int argc, char *argv[]*/)
{

	int sol[24][4];

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
						//printf("%d : %d %d %d %d\n",c, i,j,k,l);
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


	displayTab(sol);
	


}
