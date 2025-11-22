/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 14:20:41 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/22 23:50:15 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *a, t_stack *b)
{
	t_node	*cur_a;
	t_node	*cur_b;
	size_t	i;

	cur_a = a->head;
	cur_b = b->head;
	i = 0;
	ft_printf("stack a and b:\n");
	while (i < a->size || i < b->size)
	{
		if (i < a->size && cur_a)
		{
			ft_printf("%d", cur_a->value);
			cur_a = cur_a->next;
		}
		ft_printf("\t");
		if (i < b->size && cur_b)
		{
			ft_printf("%d", cur_b->value);
			cur_b = cur_b->next;
		}
		ft_printf("\n");
		i++;
	}
	ft_printf("-\t-\na\tb\n");
}

void	print_stack_index(t_stack *stack)
{
	t_node	*node;
	size_t	size;
	size_t	i;

	node = stack->head;
	size = stack->size;
	i = 0;
	ft_printf("\nstack\n");
	while (i < size)
	{
		ft_printf("%d\t%u\n", node->value, node->index);
		node = node->next;
		i++;
	}
	ft_printf("value\tindex\n");
}
