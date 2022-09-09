#include <unistd.h>


int main (int a, char *b[])
{
	int i = 0;

	if (a != 2)
	{
		return 0;
	}

	while (b[1][i] != '\0')
	{
		i++;
	}

	while (b[1][i] != ' ' && b[1][i] != '\t')
	{
		i--;
	}

	i++;

	while (b[1][i] != '\0')
	{
		write (1, &b[1][i], 1);
		i++;
	}
	write(1,"\n",1);
}
