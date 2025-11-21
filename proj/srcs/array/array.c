/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:09:00 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/21 19:10:48 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*dup_arr(long *arr, size_t size)
{
	long	*dup;
	size_t	i;

	dup = (long *)malloc(size * sizeof(long));
	if (dup == NULL)
		exit(1);
	i = 0;
	while (i < size)
	{
		dup[i] = arr[i];
		i++;
	}
	return (dup);
}

int	is_arr_unique(long *arr, size_t size)
{
	long	*dup;
	size_t	i;

	dup = dup_arr(arr, size);
	sort_arr(dup, size);
	i = 1;
	while (i < size)
	{
		if (dup[i] == dup[i - 1])
			return (free(dup), FALSE);
		i++;
	}
	return (free(dup), TRUE);
}

void	get_arg_into_arr(long *arr, char **args, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (!is_number(args[i]))
			return (error(), exit(1));
		if (!is_integer_int(args[i]))
			return (error(), exit(1));
		arr[i] = ft_atoi(args[i]);
		i++;
	}
	if (!is_arr_unique(arr, size))
		return (error(), exit(1));
}
