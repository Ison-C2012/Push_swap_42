#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int	get_maxbits(int n)
{
	int	bits = 0;
	while (n >> bits) 
		bits++;
	return (bits);
}

void	show_array(int *array, int size)
{
	for (int i=0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void	add_bucket(int *bucket, int value)
{
	while (*bucket) 
		bucket++;
	*bucket = value;
}

void	init_array(int *bucket, int size)
{
	srand((unsigned int)time(NULL));
	for (int i=0; i<size; i++)
		bucket[i] = rand() % size + 1;
}

void	bzero_array(int *array, int size)
{
	while (size--)
		array[size] = 0;
}

int	main(void)
{
	int	size = 10;
	int	*array = (int *)calloc(size, sizeof(int));
	int	*bucket0 = (int *)calloc(size, sizeof(int));
	int	*bucket1 = (int *)calloc(size, sizeof(int));
	int	maxbits=get_maxbits(size - 1);
	int i, j, k;

	init_array(array, size);

	k = 0;
	while (k<maxbits)
	{
		show_array(array, size);
		i = 0;
		while (i<size)
		{
			if (array[i] >> k & 1)
				add_bucket(bucket1, array[i]);
			else
				add_bucket(bucket0, array[i]);
			i++;
		}
		show_array(bucket0, size);
		show_array(bucket1, size);
		printf("----------\n");
		i = 0;
		while (bucket0[i])
		{
			array[i] = bucket0[i];
			i++;
		}
		j = 0;
		while (bucket1[j])
		{
			array[i + j] = bucket1[j];
			j++;
		}
		bzero_array(bucket0, size);
		bzero_array(bucket1, size);
		k++;
	}

	printf("sorted:\n");
	show_array(array, size);

	free(bucket0);
	free(bucket1);
}

