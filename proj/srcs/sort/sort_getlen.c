/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_getlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 12:01:27 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/21 16:11:19 by keitotak         ###   ########.fr       */
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

int	getlen_asc_back(t_stack *stack)
{
	int		len;
	t_node	*node;

	len = 0;
	node = stack->head;
	while (node->prev != stack->head)
	{
		if (node->value < node->prev->value)
			break ;
		len++;
		node = node->prev;
	}
	return (len);
}

int	getlen_asc_forwd(t_stack *stack)
{
	int		len;
	t_node	*node;

	len = 0;
	node = stack->head;
	while (node->next != stack->head)
	{
		if (node->value > node->next->value)
			break ;
		len++;
		node = node->next;
	}
	return (len);
}

int	getlen_ascend(t_stack *stack)
{
	int	forwd;
	int	back;

	forwd = getlen_asc_forwd(stack);
	back = getlen_asc_back(stack);
	return (forwd * (forwd >= back) - back * (forwd < back));
}
