/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 23:21:27 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 23:21:39 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	getlen_tomin(t_stack *stack)
{
	size_t	len;
	size_t	i;
	int		min;
	t_node	*node;

	i = 0;
	len = i;
	min = stack->head->value;
	node = stack->head;
	while (i < stack->size)
	{
		if (node->value < min)
		{
			min = node->value;
			len = i;
		}
		node = node->next;
		i++;
	}
	return (len);
}
