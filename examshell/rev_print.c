#include <stdio.h>
#include <unistd.h>

char *ft_rev_print (char *str)
{
	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	while (size >= 0)
	{
		write (1, &str[size], 1);
		size--;
	}

	write(1,"\n",1);
	
	return str;
}

int main (int argc, char *argv[])
{
	(void) argc;
	ft_rev_print(argv[1]);
	
	return 0;

}
