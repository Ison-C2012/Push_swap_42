/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 14:20:41 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/21 00:12:44 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
void	print_stack_size(t_stack *a, t_stack *b)
{
	ft_printf("a:%d\tb:%d\n", a->size, b->size);
}

void	print_stack(t_stack *a, t_stack *b)
{
	t_node	*cur_a;
	t_node	*cur_b;
	size_t	size;
	size_t	i;

	cur_a = a->head;
	cur_b = b->head;
	size = (a->size > b->size) ? a->size : b->size;
	i = 0;
	printf("stack a and b:\n");
//	print_stack_size(a, b);
	while (i < size)
	{
		if (i < a->size && cur_a)
		{
			printf("%d", cur_a->value);
			cur_a = cur_a->next;
		}
		printf("\t");
		if (i < b->size && cur_b)
		{
			printf("%d", cur_b->value);
			cur_b = cur_b->next;
		}
		printf("\n");
		i++;
	}
	printf("-\t-\n");
	printf("a\tb\n");
}
*/
