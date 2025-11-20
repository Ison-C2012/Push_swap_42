/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keitotak <keitotak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 00:53:03 by keitotak          #+#    #+#             */
/*   Updated: 2025/11/20 11:08:57 by keitotak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack *stack)
{
	stack->head = stack->head->next;
}

void	ra(t_stack *a)
{
	rotate(a);
	print_ra();
}

void	rb(t_stack *b)
{
	rotate(b);
	print_rb();
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	print_rr();
}
