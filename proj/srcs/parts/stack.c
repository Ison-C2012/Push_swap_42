/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:37:08 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/22 19:08:33 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(1 * sizeof(t_stack));
	if (stack == NULL)
		return (err_malloc(), NULL);
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
		return (NULL);
	while (size--)
	{
		newnode = nodenew(arr[size]);
		if (newnode == NULL)
		{
			stack_free(stack);
			return (NULL);
		}
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
	t_node	*tmp;

	while (stack->size)
	{
		tmp = stack->head->next;
		free(stack->head);
		stack->head = tmp;
		stack->size--;
	}
	free(stack);
}
