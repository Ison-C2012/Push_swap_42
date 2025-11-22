/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 15:06:17 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/22 18:41:48 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	*get_arr(long *arr, t_node *node, size_t size)
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

static unsigned int	get_index(long *arr, int value, size_t size)
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

static void	setindex(t_stack *stack)
{
	long	*arr;
	t_node	*node;
	size_t	i;

	arr = (long *)malloc(stack->size * sizeof(long));
	if (arr == NULL)
		err_malloc();
	arr = get_arr(arr, stack->head, stack->size);
	sort_arr(arr, stack->size);
	node = stack->head;
	i = 0;
	while (i < stack->size)
	{
		node->index = get_index(arr, node->value, stack->size);
		node = node->next;
		i++;
	}
	free(arr);
}

static unsigned int	get_maxbits(t_stack *stack)
{
	unsigned int	max_bits;
	unsigned int	max_index;

	max_bits = 0;
	max_index = stack->size - 1;
	while (max_index >> max_bits)
		max_bits++;
	return (max_bits);
}

void	sort_radix(t_stack *a, t_stack *b)
{
	unsigned int	max_bits;
	unsigned int	bits;
	size_t			loop_size;
	size_t			j;

	setindex(a);
	max_bits = get_maxbits(a);
	bits = 0;
	loop_size = a->size;
	while (bits < max_bits)
	{
		j = 0;
		while (j < loop_size)
		{
			if (a->head->index >> bits & 1)
				ra(a);
			else
				pb(b, a);
			j++;
		}
		while (b->size)
			pa(a, b);
		bits++;
	}
}
