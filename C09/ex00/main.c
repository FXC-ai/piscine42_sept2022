#include <stdio.h>
//#include "libft.a"


void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);


int main ()
{
	
	ft_putchar ('a');
	printf("%d\n", ft_strcmp ("Bab8","Bab0"));
	int a = 12;
	int b = 888;
	ft_swap(&a, &b);
	printf("a = %d b = %d\n", a, b);
	ft_putstr("Peut etre\n");
	printf("str_len = %d", ft_strlen("012345"));
	

	return 0;
}
