/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:13:08 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/21 13:21:46 by keitotak         ###   ########.fr       */
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

long	*sort_arr(long *arr, size_t size)
{

}

void	get_sorted_value(t_stack *stack)
{
	long	*arr;

	arr = (unsigned int *)malloc(stack->size * sizeof(int));
	if (arr == NULL)
		err_exit();
	arr = get_arr(arr, stack->head, stack->size);
	arr = sort_arr(arr, stack->size);

}

void	sort_long(t_stack *a, t_stack *b)
{
	get_sorted_value(a);
	while (1)
	{
		if (is_sorted(a) && b->size == 0)
			break ;
		pb(b, a);
		while 
		if ()
	}
	print_stack(a, b);
}
