#include "stdio.h"

void	show_binary(int nbr);

int	main(void)
{
	int	max=10;
	int	bits=0;

	printf("max=%d\t", max);
	show_binary(max);
	printf("\n");
	while (max >> bits)
	{
		printf("bits=%d\t", bits);
		printf("max>>bits=%d\t", max >> bits);
		show_binary(max >> bits);
		printf("\n");
		bits++;
	}
	return 0;
}
