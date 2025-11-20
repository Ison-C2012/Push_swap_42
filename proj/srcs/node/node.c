/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 01:25:03 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 16:25:09 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*nodenew(int value)
{
	t_node	*new;

	new = (t_node *)malloc(1 * sizeof(t_node));
	if (new == NULL)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_stack	*nodecut(t_stack *stack)
{
	if (stack->size == 0)
		return (stack);
	else if (stack->size == 1)
		stack->head = NULL;
	else
	{
		stack->head->next->prev = stack->head->prev;
		stack->head->prev->next = stack->head->next;
		stack->head = stack->head->next;
	}
	stack->size -= 1;
	return (stack);
}

t_stack	*nodeadd(t_stack *stack, t_node *new)
{
	if (stack->size == 0)
	{
		new->next = new;
		new->prev = new;
	}
	else
	{
		new->next = stack->head;
		new->prev = stack->head->prev;
		stack->head->prev->next = new;
		stack->head->prev = new;
	}
	stack->head = new;
	stack->size += 1;
	return (stack);
}
