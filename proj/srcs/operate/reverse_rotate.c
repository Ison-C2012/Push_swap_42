/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 00:53:03 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 11:08:35 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack *stack)
{
	stack->head = stack->head->prev;
}

void	rra(t_stack *a)
{
	reverse_rotate(a);
	print_rra();
}

void	rrb(t_stack *b)
{
	reverse_rotate(b);
	print_rrb();
}

void	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	print_rrr();
}
