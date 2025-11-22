/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:37:08 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/22 22:37:39 by keitotak         ###   ########.fr       */
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

t_stack	*stack_create(long *arr, size_t size)
{
	t_stack	*stack;
	t_node	*newnode;

	stack = stack_new();
	if (stack == NULL)
		return (free(arr), err_malloc(), NULL);
	while (size--)
	{
		newnode = nodenew(arr[size]);
		if (newnode == NULL)
			return (stack_free(stack), free(arr), err_malloc(), NULL);
		stack = nodeadd(stack, newnode);
	}
	return (stack);
}

t_stack	*stack_movehead(t_stack *stack, size_t len, void (*f)(t_stack*))
{
	while (len--)
		f(stack);
	return (stack);
}

void	stack_free(t_stack *stack)
{
	t_node	*next;

	while (stack->size)
	{
		next = stack->head->next;
		free(stack->head);
		stack->head = next;
		stack->size--;
	}
	free(stack);
}
