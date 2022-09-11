#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

void ft_putnbr (int nb)
{
	int mod = 0;
	char caract = 0;
	char tab[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
	int i = 0;
	if (nb == -2147483648)
		write (1, "-2147483648",11 );	
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-",1);
		}
		while (nb >10)
		{
			mod = nb % 10;
			caract = mod + '0';
			tab [i] = caract;
			i++;
			nb = nb / 10;
		}
		tab[i] = (nb + '0');		
		while (i >= 0)
		{
			write(1, &tab[i], 1);
			i--;
		}
	}
}

int	main()
{
	ft_putnbr(INT_MIN);
	printf("\n");
	ft_putnbr(INT_MAX);
	printf("\n");
	return (0);
}
