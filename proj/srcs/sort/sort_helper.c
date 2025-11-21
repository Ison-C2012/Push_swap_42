/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 23:21:27 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/21 12:02:09 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_node	*node;
	size_t	i;

	node = stack->head;
	i = 0;
	while (i++ < stack->size)
	{
		if (node->value > node->next->value)
			break ;
		node = node->next;
	}
	if (i == stack->size)
		return (TRUE);
	return (FALSE);
}
