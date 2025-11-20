/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:37:08 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 16:09:39 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(1 * sizeof(t_stack));
	if (stack == NULL)
		return (NULL);
	stack->head = NULL;
	stack->size = 0;
	return (stack);
}

t_stack	*stack_create(char **param, size_t size)
{
	t_stack	*stack;
	t_node	*newnode;

	stack = stack_new();
	if (stack == NULL)
		return (NULL);
	while (size--)
	{
		newnode = nodenew(ft_atoi(param[size]));
		if (newnode == NULL)
			return (NULL);
		stack = nodeadd(stack, newnode);
	}
	return (stack);
}
