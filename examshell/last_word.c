/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 20:02:18 by fcoindre          #+#    #+#             */
/*   Updated: 2022/09/13 21:10:15 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
#include <stdio.h>


int main (int a, char *b[])
{
	int i = 0;

	if (a == 2)
	{
		while (b[1][i] != '\0')
		{
			//write(1, &b[1][i],1);
		//	printf("i = %d c = %c\n", i, b[1][i]);
			i++;
		}
		i--;
		
		printf("\n");
		while (b[1][i] == ' ' || b[1][i] == '\t')
		{
			//write(1, &b[1][i],1);
			
			//printf("i = %d c = %c\n", i, b[1][i]);
			i--;
		}
		i--;
		
		
		printf("\n");
		while (b[1][i] > 32 && b[1][i] <= 126)
		{
			//write(1, &b[1][i],1);
			
			//printf("i = %d c = %c\n", i, b[1][i]);
			i--;
		}
		i++;	
		

		//printf("\n");
		while (b[1][i] > 32 && b[1][i] <= 126)
		{
			write(1, &b[1][i],1);
			
			//printf("i = %d c = %c\n", i, b[1][i]);
			i++;
		}
	}
	write(1,"\n",1);


	return 0;
}
