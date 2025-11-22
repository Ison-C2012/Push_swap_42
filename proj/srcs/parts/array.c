/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:09:00 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/22 22:29:33 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*static void	print_arr(long *arr, size_t n)
{
	ft_printf("\narray\n");
	while (n--)
		ft_printf("%d\n", *arr++);
}*/

static void	insertion_sort(long *arr, size_t n)
{
	size_t	i;
	int		j;
	int		key;

	i = 1;
	while (i < n)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
		i++;
	}
}

void	sort_arr(long *arr, size_t size)
{
	insertion_sort(arr, size);
}

static long	*dup_arr(long *arr, size_t size)
{
	long	*dup;
	size_t	i;

	dup = (long *)malloc(size * sizeof(long));
	if (dup == NULL)
		return (free(arr), err_exit(), NULL);
	i = 0;
	while (i < size)
	{
		dup[i] = arr[i];
		i++;
	}
	return (dup);
}

long	*get_arg_into_arr(char **args, size_t size)
{
	long	*arr;
	long	*tmp;
	size_t	i;

	arr = (long *)malloc(size * sizeof(long));
	if (arr == NULL)
		return (err_exit(), NULL);
	i = 0;
	while (i < size)
	{
		if (args[i][0] == '\0')
			return (free(arr), err_exit(), NULL);
		if (!is_number(args[i]))
			return (free(arr), err_exit(), NULL);
		if (!is_integer_int(args[i]))
			return (free(arr), err_exit(), NULL);
		arr[i] = ft_atoi(args[i]);
		i++;
	}
	tmp = dup_arr(arr, size);
	if (!is_arr_unique(tmp, size))
		return (free(tmp), free(arr), err_exit(), NULL);
	return (free(tmp), arr);
}
