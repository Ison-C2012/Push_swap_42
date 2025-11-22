#include <stdio.h>

void	show_binary(int nbr)
{
	if (nbr < 2)
	{
		printf("%d", nbr);
		return ;
	}
	show_binary(nbr / 2);
	show_binary(nbr % 2);
}
