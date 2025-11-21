/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:23:28 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/21 16:27:59 by keitotak         ###   ########.fr       */
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
//	print_arr(arr, n);
}

void	sort_arr(long *arr, size_t size)
{
	insertion_sort(arr, size);
}
