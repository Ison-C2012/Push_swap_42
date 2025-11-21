/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:06:17 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/21 15:25:41 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*get_arr(long *arr, t_node *node, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		arr[i] = node->value;
		node = node->next;
		i++;
	}
	return (arr);
}

unsigned int	get_index(long *arr, int value, size_t size)
{
	unsigned int	index;

	index = 0;
	while (index < size)
	{
		if (arr[index] == value)
			break ;
		index++;
	}
	return (index);
}

